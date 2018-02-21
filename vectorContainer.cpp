#include <iostream>
#include <vector>
#include <stdexcept>
#include <cstdlib>
#include "component.h"
#include "vectorContainer.h"
#include "container.h"
#include "strategy.h"
#include "BaseFactory.h"
#include "basePrint.h"

using namespace std;

VectorContainer::VectorContainer()
{
}
	
/*void VectorContainer::set_sort_function(Sort* sort_function) 
{
	this->sort_function = sort_function;
}*/

void VectorContainer::add_element(Base* element)
{
	this->vecValues.push_back(element);
}

void VectorContainer::print()
{
	for(unsigned i = 0; i < vecValues.size(); ++i)
	{
		v->generatePrint(vecValues.at(i)->evaluate())->print();
	}
	cout << endl;
}

void VectorContainer::sort()
{
	try 
	{
		if (sort_function == NULL) 
        {
			throw runtime_error("sort_function is NULL");
        }
	}
    catch (runtime_error &e) 
    {
         cout << e.what() << endl;
         exit(1);
    }
    this->sort_function->sort(this);
}

void VectorContainer::swap(int i, int j)
{
	Base* temp = 0;
	temp = vecValues.at(i);
	vecValues.at(i) = vecValues.at(j);
	vecValues.at(j) = temp;
}

Base* VectorContainer::at(int i)
{
	return this->vecValues.at(i);
}

int VectorContainer::size()
{
	return this->vecValues.size();
}
