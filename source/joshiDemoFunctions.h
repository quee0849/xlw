//
//
//                                                                    Test.h
//

#ifndef JOSHIDEMO_H
#define JOSHIDEMO_H

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include <xlw/DoubleOrNothing.h>
#include <xlw/ArgList.h>
#include <xlw/MJCellMatrix.h> // added for having a matrix of parameters of mixed type
#include <MCStatistics.h>
#include <Antithetic.h>
#include <Arrays.h>
#include <ConvergenceTable.h>
#include <SimpleMC8.h>
#include <Vanilla3.h>
#include <ParkMiller.h>
#include <vector>
#include <PayOffFactory.h>
//#include <PayOffRegistration.h>


using namespace xlw;

//<xlw:libraryname=MonteCarloRoutines


short // echoes a short
EchoShort(short x // number to be echoed
       );

MyMatrix // adds two matrices together after checking they're the same size.
AddMatrix(const MyMatrix& matrixA, const MyMatrix& matrixB);

double // Return the price of vanilla call given spot, strike, r, d, vol, expiry, numPaths
MCVanillaCall(const MyMatrix& parametersMatrix);

double // Return the price of vanilla call given spot, r, d, vol, expiry, name, numPaths, Strike
MCVanillaChoice(const CellMatrix& parametersMatrix);


#endif
