
#include "DynamicArray.h"
using namespace std;


int main()
{
	DynamicArray* dynamicArray = new DynamicArray;
	dynamicArray->push_back(1);
	dynamicArray->push_back(2);
	dynamicArray->push_back(3);
	dynamicArray->printArray();

	dynamicArray->push_back(4);
	dynamicArray->push_back(5);
	dynamicArray->push_back(6);
	dynamicArray->printArray();

	dynamicArray->push_back(7);
	dynamicArray->push_back(8);
	dynamicArray->push_back(9);
	dynamicArray->printArray();

	dynamicArray->push_back(10);
	dynamicArray->push_back(11);
	dynamicArray->printArray();
	dynamicArray->push_front(20);
	dynamicArray->printArray();
	dynamicArray->push_back(14);
	dynamicArray->printArray();
	dynamicArray->push_front(15);
	dynamicArray->printArray();
	dynamicArray->insert(4, 100);
	dynamicArray->printArray();
	dynamicArray->insert(4, 400);
	dynamicArray->printArray();
	dynamicArray->insert(4, 300);
	dynamicArray->printArray();

	return 0;
}

