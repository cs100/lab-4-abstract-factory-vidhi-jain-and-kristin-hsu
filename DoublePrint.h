#ifndef DOUBLEPRINT_H
#define DOUBLEPRINT_H

#include "basePrint.h"

using namespace std;

class DoublePrint : public BasePrint {
	protected:
	double value;
	
	public:
	DoublePrint();
	DoublePrint(double v) : BasePrint(v){};

	void print();
};

#endif
