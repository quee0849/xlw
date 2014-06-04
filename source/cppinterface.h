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

//<xlw:libraryname=BlackScholesExplicitFormulas

double // Return the price of vanilla call given the spot price
BSCall(double Spot);

double // Return the price of vanilla call given spot, strike, r, d, vol, expiry
BSCallWithParams(const MyMatrix& parametersMatrix);

double // Return the price of vanilla put given spot, strike, r, d, vol, expiry
BSPutWithParams(const MyMatrix& parametersMatrix);

double // Return the price of a forward given spot, strike, r, d, vol, expiry
BSForwardWithParams(const MyMatrix& parametersMatrix);

double // Return the price of a digital call given spot, strike, r, d, vol, expiry
BSDigitalCallWithParams(const MyMatrix& parametersMatrix);

double // Return the price of a digtial put given spot, strike, r, d, vol, expiry
BSDigitalPutWithParams(const MyMatrix& parametersMatrix);

double // Return the price of a zero coupon bond given spot, strike, r, d, vol, expiry
BSZeroCouponBondWithParams(const MyMatrix& parametersMatrix);

#endif
