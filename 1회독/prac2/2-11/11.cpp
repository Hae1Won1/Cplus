#include<iostream>
using namespace std;

// 문제 : C언어를 C++로 변환
// // 작성일 : 250515

int main() {
	int n;
	
	cout << "끝 수를 입력하세요>>";
	cin >> n;

	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다.\n";
}