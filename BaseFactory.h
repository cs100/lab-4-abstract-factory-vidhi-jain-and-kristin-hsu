#ifndef __BASEFACTORY_H__
#define __BASEFACTORY_H__
#include "basePrint.h"
#include "DoublePrint.h"
#include "HexPrint.h"
#include "BinaryPrint.h"
//#include "basePrint.h"

//class BasePrint;

class BaseFactory {
	public:
		/* Constructor */
		BaseFactory();

		/* Pure Virtual Generate Function */
		virtual BasePrint* generatePrint(double value) = 0;
};

class DoubleFactory : public BaseFactory
{
	public:
		DoubleFactory();
		
		DoublePrint* generatePrint(double value);
};

class HexFactory : public BaseFactory
{
	public:
	HexFactory();
	HexPrint* generatePrint(double value);
};

class BinaryFactory : public BaseFactory
{
	public:
	BinaryFactory();
	BinaryPrint* generatePrint(double value);
};

#endif //__BASEFACTORY_H__
