#include "Stack.h"
#include "iostream"
using namespace std;

Stack::Stack(int size)
	: _capacity(size), _top(-1)
{
	_arr = new int[_capacity];
}

Stack::~Stack()
{
	delete[] _arr;
}

void Stack::Push(int data)
{
	if (isFull())
	{
		cout << "overStack" << endl;
		return;
	}

	_arr[++_top] = data;
}

int Stack::Pop()
{
	if (isEmpty())
	{
		cout << "비어있습니다." << endl;
		return -1;
	}
	
	return _arr[_top--];
}

int Stack::Peek()
{
	if (isEmpty())
	{
		cout << "비어있습니다." << endl;
		return -1;
	}
	return _arr[_top];
}

bool Stack::isEmpty()
{
	return _top == -1;
}

bool Stack::isFull()
{
	return _top == _capacity - 1;
}
