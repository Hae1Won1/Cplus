#include <iostream>
using namespace std;

class MyVector {
	int *mem;
	int size;
public:
	MyVector(int n = 100, int val = 0);
	~MyVector() { delete[] mem; }
	void myVectorPrint();
};

MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

void MyVector::myVectorPrint() {
	cout << this->size << endl;

	for (int i = 0; i < this->size; i++) {
		cout << mem[i] << ' ';
	}

	cout << endl;
}

int main() {
	MyVector m1;
	m1.myVectorPrint();

	MyVector m2(10, 5);
	m2.myVectorPrint();
}
