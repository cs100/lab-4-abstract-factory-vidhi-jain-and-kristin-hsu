#include <iostream>
#include <cstdlib>
#include "BaseFactory.h"
#include "basePrint.h"
#include "component.h"
#include "BinaryPrint.h"
#include "component.h"
#include "container.h"
#include "DoublePrint.h"
#include "HexPrint.h"
#include "ListContainer.h"
#include "strategy.h"
#include "vectorContainer.h"

int main () {
	
	BaseFactory* fPrints;
	char userinput;
	int convertNum;
	int binaryNum;
	int arr[64];
	int i = 0;
	
	cout << "Choose the print to be d(double), h(hex), or b(binary)" << endl;
	cin >> userinput;
	cout << endl;
	
	cout << "Enter number to be converted: ";
	cin >> convertNum;
	cout << endl;
	
	if (userinput == 'd'){
		fPrints = new DoubleFactory();
		cout << convertNum << ".0" << endl;
	}
	
	else if (userinput == 'h'){
		fPrints = new HexFactory();
    	cout << "0x" << hex << convertNum << '\n' ;
	}
	
	else if (userinput == 'b'){
		fPrints = new BinaryFactory();
    	while (convertNum > 0){
    		arr[i] = convertNum%2;
    		++i;
    		convertNum/=2;
    	}
    	
    	for (int j = i-1; j >= 0; --j){
    		cout << arr[j];
    	}
    	
    	cout << endl;
	}
	
	else if (userinput != 'd' || 'h' || 'b'){
		cout << "ERROR! Unable to convert your number. Please enter only  d(double), h(hex), or b(binary)" << endl;
	}
	
	
 //   Op* op1 = new Op(5);
 //   Op* op2 = new Op(2);
 //   Op* op3 = new Op(4);
 //   Op* op4 = new Op(6);
 //   Multiply* A = new Multiply(op1, op2);
 //   Subtract* B = new Subtract(op3, op4);
 //   Add* C = new Add(A, B);
 //   Square* D = new Square(C);

	// //cout << A << " " << B << " " << C << " " << D <<endl;
 //   //VectorContainer* container = new VectorContainer();
 //   ListContainer* container = new ListContainer();
 //   container->add_element(A);
 //   container->add_element(B);
 //   container->add_element(C);
 //   container->add_element(D);
 //   //cout << "Container Before Sort: " << endl;
 //   //container->print();
 //   container->set_sort_function(new SelectionSort());
 //   container->set_TypeofPrint(fPrints);
 //   container->sort();	
 //   //cout << "Container After Sort: " << endl;
 //   container->print();
};
