#include <iostream>
using namespace std;

class MyInStack {
	int* p;
	int size;
	int tos;
public:
	MyInStack();
	MyInStack(int size);
	MyInStack(const MyInStack& s);
	~MyInStack();
	bool push(int n);
	bool pop(int& n);
};
MyInStack::MyInStack(int size) {
	this->size = size;
	p = new int[this->size];
}

MyInStack::MyInStack(const MyInStack& s) {
	size = s.size;
	p = new int[size];
	for (int i = 0; i < size; i++) {
		p[i] = s.p[i];
	}
}
MyInStack::~MyInStack() {
	delete[]p;
}

bool MyInStack::push(int n) {
	if (tos == 9) {
		return false;
	}
	p[++tos] = n;
	return true;
}
bool MyInStack::pop(int& n) {
	if (tos == -1) {
		return false;
	}
	n = p[tos--];
	return true;
}

int main() {
	MyInStack a(10);
	a.push(10);
	a.push(20);
	MyInStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}