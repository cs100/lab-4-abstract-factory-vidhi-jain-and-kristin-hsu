#ifndef __HEXPRINT_H__
#define __HEXPRINT_H__
#include "basePrint.h"

//class BasePrint;

class HexPrint : public BasePrint
{
	protected:
		double value;
	public:
		HexPrint();
		HexPrint(double value) : BasePrint(value) {};
		void print();
};


#endif //__HEXPRINT_H__
