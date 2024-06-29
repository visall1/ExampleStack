#include<iostream>
using namespace std;
class Stack
{
	enum{ EMPTY = -1, FULL = 10 };
	int top;
	char MyStack[FULL+1];

public:
	Stack():top(EMPTY){}
	void Push(char Element) {
		if (!IsFull()) {
			MyStack[++top] = Element;
		}
		else {
			cout<<"Stack overflow!\n";
		}
	}
	char pop() {
		if (!IsEmpty()) {
			MyStack[top--];
		}
		return 0;
	}
	bool IsEmpty() {
		return top == EMPTY;
	}
	bool IsFull() {
		return top == FULL;
	}
	void clear() {
		top = EMPTY;
	}
	int getCount() {
		return top + 1;
	}
	void Print() {
		if (!IsEmpty()) {
			for (char i = top; i > EMPTY; i--) {
				cout << "-------------------" << endl;
				cout << "|\t "<<MyStack[i] <<"  \t|  " << endl;
				cout << "-------------------" << endl;
			}
		}
		else
		{
			cout << "Stack is Empty!" << endl;
		}
	}
private:

};
int main() {
	Stack st;
	st.Print();
	for (char i = 'A'; i < 'G'; i++) {
		st.Push(i);
	}
	st.Print();
	st.pop();
	st.pop();
	st.pop();
	st.Print();
	cout << "Stack count number : " << st.getCount() << endl;
	return 0;
}
