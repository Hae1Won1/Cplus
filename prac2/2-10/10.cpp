#include<iostream>
#include<string>
using namespace std;

// 문제 : 문자열 하나를 입력받고 1개에서부터 모든 글자가 나타날 때까지 부분 문자열을 출력한다.
// // 작성일 : 250515

int main() {
	char a[100];

	cout << "문자열 입력>>";
	cin >> a;

	int len, i;
	for (i = 0; i < 100; i++) {
		if (a[i] == '\0') break;
	}

	len = i;

	for (int i = 0; i < len; i++) {
		for (int j = 0; j <= i; j++) {
			cout << a[j];
		}
		cout << '\n';
	}
}