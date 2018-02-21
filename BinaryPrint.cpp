#include <iostream>
#include <bitset>
#include "BinaryPrint.h"
//#include "basePrint.h"

BinaryPrint::BinaryPrint()
{
}

void BinaryPrint::print()
{
	std::bitset<16> bar(value);
	std::cout << bar << " ";
}
