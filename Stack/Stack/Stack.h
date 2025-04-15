#pragma once
class Stack
{
public:
	Stack(int size);
	~Stack();
	
	void Push(int data);
	int Pop();
	int Peek();
	bool isEmpty();
	bool isFull();
	
	int Capacity() { return _capacity;}

private:
	int* _arr;
	int _top;
	int _capacity;
};

