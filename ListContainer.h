#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include <list>
#include "component.h"
#include "container.h"

using namespace std;

class Sort;
class Container;

class ListContainer: public Container{
	protected:
	list<Base* > lCont;
	public:
	ListContainer() {};
	ListContainer(Sort* sort_function) : Container(sort_function) {};
	void add_element(Base* element);
	void print();
	void sort();
	void swap(int i, int j);
	Base* at (int i);
	int size();
};

#endif
