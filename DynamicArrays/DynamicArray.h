#pragma once
#define DYNAMIC_ARRAY_CHUNK_SIZE 5
#define DYNAMIC_ARRAY_INITIAL_CAPACITY 5

class DynamicArray
{
public:
	DynamicArray();
	~DynamicArray();

	bool empty() const;
	unsigned int size() const;

	int& operator[](unsigned int index);
	const int& operator[](unsigned int index) const;

	void push_back(int value);
	void push_front(int value);
	void insert(unsigned int index, int value);
	void erase(unsigned int index);
	void clear();

	void shrink_to_fit();

	void printArray();

private:
	void increaseCapacity();

	int* mArray = nullptr;
	unsigned int mCapacity = DYNAMIC_ARRAY_INITIAL_CAPACITY;
	unsigned int mSize = 0;
};

