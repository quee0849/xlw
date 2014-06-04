#include<joshiDemoFunctions.h>
#pragma warning (disable : 4996)


short // echoes a short
EchoShort(short x // number to be echoed
           )
{
    return x;
}

MyMatrix // adds two matrices together after checking they're the same size.
AddMatrix(const MyMatrix& matrixA, const MyMatrix& matrixB) {

	if (matrixA.rows() != matrixB.rows() || matrixA.columns() != matrixB.columns()){
	throw("matrices must be of the same size");}

	MyMatrix result(matrixA.rows(), matrixB.columns());

	for (size_t r=0; r<matrixA.rows();r++) {
		for (size_t c= 0 ; c < matrixB.columns(); c++) {
		result(r,c) = matrixA(r,c)+ matrixB(r,c);
		}
	}
	return result;

}

double // Return the MC price of vanilla call given spot, strike, r, d, vol, expiry, numberOfPaths
MCVanillaCall(const MyMatrix& parametersMatrix) {
	if (parametersMatrix.columns() != 7 && parametersMatrix.rows() != 1 )
	{throw("Input matrix should be 1 x 7");}

	double Spot =  parametersMatrix(0,0);
	double Strike =  parametersMatrix(0,1);
	double r =  parametersMatrix(0,2);
	double d =  parametersMatrix(0,3);
	double vol =  parametersMatrix(0,4);
	double expiry = parametersMatrix(0,5); 
	unsigned long NumberOfPaths = parametersMatrix(0,6);

    PayOffCall thePayOff(Strike);

    VanillaOption theOption(thePayOff, expiry);

    ParametersConstant VolParam(vol);
    ParametersConstant rParam(r);

    StatisticsMean gatherer;
    ConvergenceTable gathererTwo(gatherer);

    RandomParkMiller RNgenerator(1);
	//RandomMersTwister generator(1);
    AntiThetic GenTwo(RNgenerator);

	SimpleMonteCarlo6(theOption,
                                      Spot, 
                                      VolParam,
                                      rParam,
                                      NumberOfPaths,
                                      gathererTwo,
									  RNgenerator); // no Antithetic
                                      //GenTwo); // Antithetic

	return gathererTwo.GetResultsSoFar()[gathererTwo.GetResultsSoFar().size()-1][0];
}


double // Return price of  given  spot, r, d,vol,expiry,nameOfOption,numPaths,strike
MCVanillaChoice(const CellMatrix& parametersMatrix) {
	if ( (parametersMatrix.columns() < 8 || parametersMatrix.columns() >9 ) && parametersMatrix.rows() != 1 )
	{throw("Input matrix should be 1 x 7");}
	double Spot =  parametersMatrix(0,0);
	double r =  parametersMatrix(0,1);
	double d =  parametersMatrix(0,2);
	double vol =  parametersMatrix(0,3);
	double expiry = parametersMatrix(0,4); 
	//std::string name = parametersMatrix(0,5);
	std::string name = "put";
	unsigned long NumberOfPaths = parametersMatrix(0,6);
	double Strike[1];
	Strike[0] = parametersMatrix(0,7);
	//double Low,Up; 
	//Strike[1]=200;
// create an option of type name with give strike(s) from the factory
    PayOff* PayOffPtr = PayOffFactory::Instance().CreatePayOff(name,Strike); 
	//now convert this payoffptr to a VanillaOption to plug in to SimpleMonteCarlo6
	VanillaOption theOption(*PayOffPtr, expiry);

    if (PayOffPtr != NULL)
    {
		ParametersConstant VolParam(vol);
		ParametersConstant rParam(r);

		StatisticsMean gatherer;
		ConvergenceTable gathererTwo(gatherer);

		RandomParkMiller generator(1);
		//RandomMersTwister generator(1);
		AntiThetic GenTwo(generator);

		SimpleMonteCarlo6(theOption,
                                      Spot, 
                                      VolParam,
                                      rParam,
                                      NumberOfPaths,
                                      gathererTwo,
									  generator); // no Antithetic
                                      //GenTwo); // Antithetic

        delete PayOffPtr;
		return gathererTwo.GetResultsSoFar()[gathererTwo.GetResultsSoFar().size()-1][0];

    }
    // if Payoffptr is null
	return 0.0;

}