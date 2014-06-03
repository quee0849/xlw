//
//
//                                                                    Test.h
//

#ifndef TEST_H
#define TEST_H

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include <xlw/DoubleOrNothing.h>
#include <xlw/ArgList.h>
#include <BlackScholesFormulas.h>

using namespace xlw;

//<xlw:libraryname=MatrixFunctionsDemo


short // echoes a short
EchoShort(short x // number to be echoed
       );

MyMatrix AddMatrix(const MyMatrix& matrixA, const MyMatrix& matrixB);

double BSCall(double Spot);

double BSCallWithParams(const MyMatrix& parametersMatrix);

double BSPutWithParams(const MyMatrix& parametersMatrix);

double BSForwardWithParams(const MyMatrix& parametersMatrix);

double BSDigitalCallWithParams(const MyMatrix& parametersMatrix);

double BSDigitalPutWithParams(const MyMatrix& parametersMatrix);

double BSZeroCouponBondWithParams(const MyMatrix& parametersMatrix);

#endif
