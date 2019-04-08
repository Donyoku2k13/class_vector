#include "vector_.h"
using namespace std;
vector_::vector_()
{
	size = 0;
	arr = nullptr;
}

vector_::vector_(int size, int val)
{
	this->size = size;
	this->arr = new int[this->size];

	for (int i = 0; i < size; i++)
		this->arr[i] = val;
}

vector_::vector_(const vector_ & obj)
{
	this->size = obj.size;
	if (size == 0)
		arr = nullptr;
	else {
		this->arr = new int[size];
		for (int i = 0; i < size; i++)
			this->arr[i] = obj.arr[i];
	}
}

void vector_::push_back(int n)
{
	if (this->size==0)
	{
		this->size = 1;
		this->arr = new int[1];
		this->arr[0] = n;
		return;
	}
	int *tmp = new int[this->size+1];
	for (int i = 0; i < this->size; i++)
	{
		tmp[i] = this->arr[i];
	}
	tmp[this->size] = n;
	delete[]this->arr;
	this->arr = tmp;
	this->size++;
}

void vector_::print()
{
	for (size_t i = 0; i <this->size; i++)
	{
		cout << this->arr[i]<<"  ";
	}
}

vector_::~vector_()
{
	if (arr != nullptr) {
		delete[]this->arr;
		this->size = 0;
	}

	
}
	
