
#include<cppinterface.h>
#pragma warning (disable : 4996)



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