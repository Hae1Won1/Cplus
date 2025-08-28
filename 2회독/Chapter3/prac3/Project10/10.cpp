#include<iostream>
#include"Pipe.h"
using namespace std;

int main() {
	Pipe pipe;
	for (int i = 0; i < 6; i++) pipe.arrive(i);
	pipe.show();
	for (int i = 0; i < 12; i++) pipe.arrive(i);
	pipe.show();
	int front = pipe.shift();
	cout << "shift()로 제거된 맨 앞 데이터 : " << front << '\n';
	pipe.show();
	front = pipe.arrive(50);

	cout << "arrive(50)로 제거된 맨 앞 데이터 : " << front << '\n';
	pipe.show();
}