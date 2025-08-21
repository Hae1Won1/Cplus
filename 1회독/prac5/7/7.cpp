#include<iostream>
using namespace std;

class MyInStack {
	int p[10];
	int tos;
public:
	MyInStack() { tos = -1; };
	bool push(int n); // 정수 n 푸시, 꽉 차 있으면 false, 아니면 true
	bool pop(int& n); // 팝하여 n에 저장, 스텍이 비어있으면 false, 아니면 true
};
bool MyInStack::push(int n) {
	if(tos == 9){
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
	MyInStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}