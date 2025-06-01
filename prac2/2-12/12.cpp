#include<iostream>
using namespace std;

// 문제 : C언어를 C++로 변환
// 작성일 : 250515
int sum(int a, int b);

int main() {
	int n;
	cout << "끝 수를 입력하세요>>";
	cin >> n;

	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다.\n";
}

int sum(int a, int b) {
	int res = 0;
	for (int i = a; i <= b; i++) {
		res += i;
	}
	return res;
}