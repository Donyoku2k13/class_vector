#include<iostream>
using namespace std;
class vector_
{
private:
	int size;
	int *arr;
public:
	vector_();
	vector_(int size, int val);
	vector_(const vector_ &obj);
	void push_back(int n);
	void print();
	~vector_();


};

