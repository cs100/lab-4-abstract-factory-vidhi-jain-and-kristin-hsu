#include <iostream>
#include "container.h"

Container::Container(Sort* function) {
	set_sort_function(function);

	
}

Container::Container(BaseFactory* value) {
	set_TypeofPrint(value);

	
}

void Container::set_sort_function(Sort* sort_function) {
	this->sort_function = sort_function;
}

void Container::set_TypeofPrint(BaseFactory* factory)
{
	v = factory;
}

