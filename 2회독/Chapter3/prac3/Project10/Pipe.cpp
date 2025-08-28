#include<iostream>
#include"Pipe.h"
using namespace std;
#define Max_Index 10

int Pipe::arrive(int n) {
	int tmp = -1;
	if (index == Max_Index) {
		tmp = shift();
		--index;
	}
	data[index++] = n;
	return tmp;
}

int Pipe::shift() {
	int tmp = data[0];
	for (int i = 1; i < index; i++) {
		data[i - 1] = data[i];
	}
	data[Max_Index-1] = 0;
	return tmp;
}

void Pipe::show() {
	cout << "파이프 내부 [";
	for (int i = 0; i < Max_Index; i++) {
		cout << data[i] << " ";
	}
	cout << "]\n";
}