#include <iostream>
#include "component.h"

using namespace std;


double Square::evaluate() {
	return (this->node->evaluate() * this->node->evaluate());
}



double Op::evaluate() {
		return this->value;
}


double Add::evaluate() {
		return this->left->evaluate() + this->right->evaluate();	
}

double Subtract::evaluate() {
		return this->left->evaluate() - this->right->evaluate();
};

double Divide::evaluate() {
		return this->left->evaluate() / this->right->evaluate();

};

double Multiply::evaluate() {
		return this->left->evaluate() * this->right->evaluate();

};
