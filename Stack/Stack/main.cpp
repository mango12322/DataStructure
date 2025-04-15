#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack stk(5);
	stk.Push(1);
	stk.Push(2);
	stk.Push(3);
	stk.Push(4);
	stk.Push(5);
	stk.Push(6);	

	cout << stk.Pop() << endl;
	cout << stk.Pop() << endl;
	cout << stk.Pop() << endl;
	cout << stk.Peek() << endl;
}