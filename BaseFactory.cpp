#include <iostream>
#include "BaseFactory.h"
#include "basePrint.h"

using namespace std;

//class BasePrint;

BaseFactory::BaseFactory()
{
}

DoubleFactory::DoubleFactory()
{
}

HexFactory::HexFactory()
{
}

BinaryFactory::BinaryFactory()
{
}

DoublePrint* DoubleFactory::generatePrint(double value)
{
	//DoublePrint* v = new DoublePrint(value);
	return new DoublePrint(value); 
}

HexPrint* HexFactory::generatePrint(double value)
{
	//HexPrint* v = new HexPrint(value);
	return new HexPrint(value); 
}

BinaryPrint* BinaryFactory::generatePrint(double value)
{
	//BinaryPrint* v = new BinaryPrint(value);
	return new BinaryPrint(value); 
}
