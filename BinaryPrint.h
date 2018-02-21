#ifndef __BINARYPRINT_H__
#define __BINARYPRINT_H__
#include "basePrint.h"

//class BasePrint;

class BinaryPrint : public BasePrint{
	protected:
		/* Value to Print */
		double value;

	public:
		/* Constructors */
		BinaryPrint();
		BinaryPrint(double v) : BasePrint(v) {};
		
		/* Pure Virtual Print Function */
		void print();
};

#endif //__BINARYPRINT_H__
