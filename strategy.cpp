#include <iostream>
//#include "container.h"
#include "strategy.h"
#include "component.h"

using namespace std;

Sort::Sort() {}

SelectionSort::SelectionSort() : Sort() 
{}

void SelectionSort::sort(Container* container)
{
	int first;
	//Base* temp;
	for(int i = container->size() - 1; i > 0; --i)
	{
		first = 0;
		for(int j = 1; j <= i; ++j)
		{
			if(container->at(j)->evaluate() < container->at(first)->evaluate())
			{
				first = j;
			}
			//container->swap(first, i);
			/*temp = container->at(first);
			container->at(first) = container->at(i);
			container->at(i) = temp;*/
		}
		container->swap(first, i);
	}
	return;
}

BubbleSort::BubbleSort() : Sort()
{}

void BubbleSort::sort(Container* container)
{
	int flag = 1;
	//Base* temp;
	
	for(int i = 1; (i <= container->size()) && flag; ++i)
	{
		flag = 0;
		for(int j = 0; j < (container->size() - 1); ++j)
		{
			if(container->at(j+1)->evaluate() > container->at(j)->evaluate())
			{
				container->swap(j, j+1);
				/*temp = container->at(j);
				container->at(j) = container->at(j+1);
				container->at(j+1) = temp;*/
				flag = 1;
			}
		}
	}
	return;
}
