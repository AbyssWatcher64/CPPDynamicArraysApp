#include "DynamicArray.h"
#include <iostream>

DynamicArray::DynamicArray()
{
	mArray = new int[DYNAMIC_ARRAY_CHUNK_SIZE];
}

DynamicArray::~DynamicArray(){}

bool DynamicArray::empty() const
{
	if (mSize == 0)
		return true;
	else
		return false;
}

unsigned int DynamicArray::size() const
{
	return mSize;
}

int& DynamicArray::operator[](unsigned int index)
{
	int& number = mArray[index];
	return number;
}

const int& DynamicArray::operator[](unsigned int index) const
{
	int& number = mArray[index];
	return number;
}

void DynamicArray::push_back(int value)
{
	if (mSize == mCapacity)
	{
		increaseCapacity();
	}
	mArray[mSize] = value;
	mSize++;

}
void DynamicArray::push_front(int value)
{
	if (mSize == mCapacity)
	{
		increaseCapacity();
	}
	for (int i = 0; i <= mSize; i++)
	{
		mArray[mSize + 1 - i] = mArray[mSize - i];
	}
	mArray[0] = value;
	mSize++;
}

void DynamicArray::insert(unsigned int index, int elem)
{
	if (mSize + 1 == mCapacity)
	{
		increaseCapacity();
	}	
	for (int i = mSize; i >= index; i--)
	{
		mArray[i+1] = mArray[i];
	}
	mArray[index] = elem;
	mSize++;
}

void DynamicArray::erase(unsigned int index)
{
	for (int i = index; i < mSize; i++)
	{
		mArray[i] = mArray[i + 1];
	}
	mSize--;
}

void DynamicArray::clear()
{
	mSize = 0;
}

void DynamicArray::increaseCapacity()
{
	int* tmpArray = new int[mCapacity];
	for (int j = 0; j < mSize; j++)
	{
		tmpArray[j] = mArray[j];
	}
	delete[] mArray;
	mCapacity += DYNAMIC_ARRAY_CHUNK_SIZE;
	mArray = new int[mCapacity];
	for (int i = 0; i < mSize; ++i)
	{
		mArray[i] = tmpArray[i];
	}
	delete[] tmpArray;
}

void DynamicArray::printArray()
{
	for (int i = 0; i < mSize; i++)
	{
		std::cout << mArray[i] << " ";
	}
	std::cout << std::endl;
}