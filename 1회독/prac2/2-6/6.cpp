#include<iostream>
#include<string>
using namespace std;

// 문제 : 문자열 두 개 입력받고 두 개의 문자열이 같은지 검사
// 작성일 : 250515

int main() {
	string a, b;

	cout << "새 암호를 입력하세요>>";
	cin >> a;

	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> b;

	if (a == b) {
		cout << "같습니다";
	}
	else{
		cout << "같지 않습니다";
	}

}