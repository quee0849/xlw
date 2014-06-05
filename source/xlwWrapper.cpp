//// 
//// Autogenerated by xlw 
//// Do not edit this file, it will be overwritten 
//// by InterfaceGenerator 
////

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include "cppinterface.h"
#include <xlw/xlw.h>
#include <xlw/XlFunctionRegistration.h>
#include <stdexcept>
#include <xlw/XlOpenClose.h>
#include <xlw/HiResTimer.h>
using namespace xlw;

namespace {
const char* LibraryName = "MatrixFunctionsDemo";
};


// registrations start here


namespace
{
XLRegistration::Arg
EchoShortArgs[]=
{
{ "x"," number to be echoed ","XLF_OPER"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerEchoShort("xlEchoShort",
"EchoShort",
" echoes a short ",
LibraryName,
EchoShortArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlEchoShort(
LPXLFOPER xa)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);

XlfOper xb(
	(xa));
short x(
	xb.AsShort("x"));

short result(
	EchoShort(
		x)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
AddMatrixArgs[]=
{
{ "matrixA","too lazy to comment this one ","XLF_OPER"},
{ "matrixB","too lazy to comment this one ","XLF_OPER"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerAddMatrix("xlAddMatrix",
"AddMatrix",
"too lazy to comment this function ",
LibraryName,
AddMatrixArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlAddMatrix(
LPXLFOPER matrixAa,
LPXLFOPER matrixBa)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);

XlfOper matrixAb(
	(matrixAa));
MyMatrix matrixA(
	matrixAb.AsMatrix("matrixA"));

XlfOper matrixBb(
	(matrixBa));
MyMatrix matrixB(
	matrixBb.AsMatrix("matrixB"));

MyMatrix result(
	AddMatrix(
		matrixA,
		matrixB)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
BSCallArgs[]=
{
{ "Spot","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerBSCall("xlBSCall",
"BSCall",
"too lazy to comment this function ",
LibraryName,
BSCallArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlBSCall(
double Spot)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	BSCall(
		Spot)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
BSCallWithParamsArgs[]=
{
{ "parametersMatrix","too lazy to comment this one ","XLF_OPER"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerBSCallWithParams("xlBSCallWithParams",
"BSCallWithParams",
"too lazy to comment this function ",
LibraryName,
BSCallWithParamsArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlBSCallWithParams(
LPXLFOPER parametersMatrixa)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);

XlfOper parametersMatrixb(
	(parametersMatrixa));
MyMatrix parametersMatrix(
	parametersMatrixb.AsMatrix("parametersMatrix"));

double result(
	BSCallWithParams(
		parametersMatrix)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
BSPutWithParamsArgs[]=
{
{ "parametersMatrix","too lazy to comment this one ","XLF_OPER"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerBSPutWithParams("xlBSPutWithParams",
"BSPutWithParams",
"too lazy to comment this function ",
LibraryName,
BSPutWithParamsArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlBSPutWithParams(
LPXLFOPER parametersMatrixa)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);

XlfOper parametersMatrixb(
	(parametersMatrixa));
MyMatrix parametersMatrix(
	parametersMatrixb.AsMatrix("parametersMatrix"));

double result(
	BSPutWithParams(
		parametersMatrix)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
BSForwardWithParamsArgs[]=
{
{ "parametersMatrix","too lazy to comment this one ","XLF_OPER"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerBSForwardWithParams("xlBSForwardWithParams",
"BSForwardWithParams",
"too lazy to comment this function ",
LibraryName,
BSForwardWithParamsArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlBSForwardWithParams(
LPXLFOPER parametersMatrixa)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);

XlfOper parametersMatrixb(
	(parametersMatrixa));
MyMatrix parametersMatrix(
	parametersMatrixb.AsMatrix("parametersMatrix"));

double result(
	BSForwardWithParams(
		parametersMatrix)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
BSDigitalCallWithParamsArgs[]=
{
{ "parametersMatrix","too lazy to comment this one ","XLF_OPER"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerBSDigitalCallWithParams("xlBSDigitalCallWithParams",
"BSDigitalCallWithParams",
"too lazy to comment this function ",
LibraryName,
BSDigitalCallWithParamsArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlBSDigitalCallWithParams(
LPXLFOPER parametersMatrixa)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);

XlfOper parametersMatrixb(
	(parametersMatrixa));
MyMatrix parametersMatrix(
	parametersMatrixb.AsMatrix("parametersMatrix"));

double result(
	BSDigitalCallWithParams(
		parametersMatrix)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
BSDigitalPutWithParamsArgs[]=
{
{ "parametersMatrix","too lazy to comment this one ","XLF_OPER"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerBSDigitalPutWithParams("xlBSDigitalPutWithParams",
"BSDigitalPutWithParams",
"too lazy to comment this function ",
LibraryName,
BSDigitalPutWithParamsArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlBSDigitalPutWithParams(
LPXLFOPER parametersMatrixa)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);

XlfOper parametersMatrixb(
	(parametersMatrixa));
MyMatrix parametersMatrix(
	parametersMatrixb.AsMatrix("parametersMatrix"));

double result(
	BSDigitalPutWithParams(
		parametersMatrix)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
BSZeroCouponBondWithParamsArgs[]=
{
{ "parametersMatrix","too lazy to comment this one ","XLF_OPER"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerBSZeroCouponBondWithParams("xlBSZeroCouponBondWithParams",
"BSZeroCouponBondWithParams",
"too lazy to comment this function ",
LibraryName,
BSZeroCouponBondWithParamsArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlBSZeroCouponBondWithParams(
LPXLFOPER parametersMatrixa)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);

XlfOper parametersMatrixb(
	(parametersMatrixa));
MyMatrix parametersMatrix(
	parametersMatrixb.AsMatrix("parametersMatrix"));

double result(
	BSZeroCouponBondWithParams(
		parametersMatrix)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

//////////////////////////
// Methods that will get registered to execute in AutoOpen
//////////////////////////

//////////////////////////
// Methods that will get registered to execute in AutoClose
//////////////////////////

