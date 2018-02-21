#include "DoublePrint.h"
#include <iostream>

using namespace std;

DoublePrint::DoublePrint()
{
}

void DoublePrint::print() {
    cin >> value;
	cout << value << ".0" << endl;
}