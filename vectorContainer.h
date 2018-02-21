#ifndef __VectorContainer_H__
#define __VectorContainer_H__

#include <vector>
#include <cstdlib>
#include "component.h"
#include "container.h"

using namespace std;

class Sort;

class VectorContainer : public Container{
	protected:
		vector<Base*> vecValues;
	public:
		VectorContainer();
        VectorContainer(Sort* sort_function) : Container(sort_function) {};
        void add_element(Base* element);
        void print();
        void sort();
        void swap(int i, int j);
        Base* at(int i);
        int size();
};
#endif // __VectorContainer_H__
