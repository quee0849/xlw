
#include<cppinterface.h>
#pragma warning (disable : 4996)


short // echoes a short
EchoShort(short x // number to be echoed
           )
{
    return x;
}

MyMatrix AddMatrix(const MyMatrix& matrixA, const MyMatrix& matrixB) {

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

double BSCall(double Spot) {
	return BlackScholesCall(Spot, 100,0.05,0.0,0.15,1);
}

double BSCallWithParams(const MyMatrix& parametersMatrix) {
	if (parametersMatrix.columns() != 6 && parametersMatrix.rows() != 1 ) {
	throw("Input matrix should be 1 x 5");}
	double Spot =  parametersMatrix(0,0);
	double Strike =  parametersMatrix(0,1);
	double r =  parametersMatrix(0,2);
	double d =  parametersMatrix(0,3);
	double vol =  parametersMatrix(0,4);
	double expiry = parametersMatrix(0,5); 
	return BlackScholesCall(Spot, Strike,r,d,vol,expiry);
}

double BSPutWithParams(const MyMatrix& parametersMatrix) {
	if (parametersMatrix.columns() != 6 && parametersMatrix.rows() != 1 ) {
	throw("Input matrix should be 1 x 5");}
	double Spot =  parametersMatrix(0,0);
	double Strike =  parametersMatrix(0,1);
	double r =  parametersMatrix(0,2);
	double d =  parametersMatrix(0,3);
	double vol =  parametersMatrix(0,4);
	double expiry = parametersMatrix(0,5); 
	return BlackScholesPut(Spot, Strike,r,d,vol,expiry);
}

double BSForwardWithParams(const MyMatrix& parametersMatrix) {
	if (parametersMatrix.columns() != 6 && parametersMatrix.rows() != 1 ) {
	throw("Input matrix should be 1 x 5");}
	double Spot =  parametersMatrix(0,0);
	double Strike =  parametersMatrix(0,1);
	double r =  parametersMatrix(0,2);
	double d =  parametersMatrix(0,3);
	double vol =  parametersMatrix(0,4);
	double expiry = parametersMatrix(0,5); 
	return BlackScholesForwardPrice(Spot, Strike,r,d,vol,expiry);
}

double BSDigitalCallWithParams(const MyMatrix& parametersMatrix){
	if (parametersMatrix.columns() != 6 && parametersMatrix.rows() != 1 ) {
	throw("Input matrix should be 1 x 5");}
	double Spot =  parametersMatrix(0,0);
	double Strike =  parametersMatrix(0,1);
	double r =  parametersMatrix(0,2);
	double d =  parametersMatrix(0,3);
	double vol =  parametersMatrix(0,4);
	double expiry = parametersMatrix(0,5); 
	return BlackScholesDigitalCall(Spot, Strike,r,d,vol,expiry);
}

double BSDigitalPutWithParams(const MyMatrix& parametersMatrix){
	if (parametersMatrix.columns() != 6 && parametersMatrix.rows() != 1 ) {
	throw("Input matrix should be 1 x 5");}
	double Spot =  parametersMatrix(0,0);
	double Strike =  parametersMatrix(0,1);
	double r =  parametersMatrix(0,2);
	double d =  parametersMatrix(0,3);
	double vol =  parametersMatrix(0,4);
	double expiry = parametersMatrix(0,5); 
	return BlackScholesDigitalPut(Spot, Strike,r,d,vol,expiry);
}

double BSZeroCouponBondWithParams(const MyMatrix& parametersMatrix){
	if (parametersMatrix.columns() != 6 && parametersMatrix.rows() != 1 ) {
	throw("Input matrix should be 1 x 5");}
	double Spot =  parametersMatrix(0,0);
	double Strike =  parametersMatrix(0,1);
	double r =  parametersMatrix(0,2);
	double d =  parametersMatrix(0,3);
	double vol =  parametersMatrix(0,4);
	double expiry = parametersMatrix(0,5); 
	return BlackScholesZeroCouponBond(Spot, Strike,r,d,vol,expiry);
}