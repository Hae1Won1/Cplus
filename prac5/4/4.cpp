#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big);

int main() {
	int a, b;
	int big = 0;
	cin >> a >> b;

	if (bigger(a, b, big)) {
		cout << "두 수의 크기가 같습니다.";
	}
	else {
		cout << big;
	}
}

bool bigger(int a, int b, int& big) {
	if (a == b) {
		return true;
	}
	else {
		big = a > b ? a : b;
		return false;
	}
}
