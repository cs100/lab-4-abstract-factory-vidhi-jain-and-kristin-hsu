#include <iostream>
#include <list>
#include <stdexcept>
#include <cstdlib>
#include "ListContainer.h"
#include "component.h"
#include "container.h"
#include "strategy.h"
#include "BaseFactory.h"
#include "basePrint.h"

using namespace std;

void ListContainer::add_element(Base* element) {
	lCont.push_back(element);
}

void ListContainer::print() {
	list<Base*>::iterator it = lCont.begin();
	//BaseFactory* v = new Container();
	for (it = lCont.begin(); it != lCont.end(); it++) {
		v->generatePrint((*it)->evaluate())-> print();
		//cout << (*it)->evaluate() << " ";
	}
	cout << endl;
}

void ListContainer::sort() {			// try to find sort function
	try {
		if (sort_function == NULL) {
			throw runtime_error("Sort function is null");
		}
	}
	catch (runtime_error &e) {
		cout << e.what() << endl;
		exit(1);
	}
	this->sort_function->sort(this);
}

void ListContainer::swap(int i, int j) {
		list<Base*>::iterator it = lCont.begin();
		advance(it, i);
		
		list<Base*>::iterator it2 = lCont.begin();
		advance(it2, j);
		
		Base* temp = *it;
		*it = *it2;
		*it2 = temp;
}

Base* ListContainer::at (int i) {
	if (static_cast<int>(lCont.size()) > i) {
		list<Base*>::iterator it = lCont.begin();
		advance(it, i);
		return *it;
	}
	else {
		return NULL;
	}
}

int ListContainer::size() {			// returns size of list
	return lCont.size();
}