#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int count = 0;

	cout << "문자열 입력>> ";
	getline(cin, s, '\n');

	/* 1
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a') count++;
	}
	*/

	/* 2-1 (활용 xx)
	if (s.find('a', 0) >= 0) {
		for (int i = s.find('a', 0); i < s.length(); i++) {
			if (s[i] == 'a') count++;
		}
	}	
	*/
	// string::npos : string.find() 같은 함수가 찾는 문자를 발견하지 못했을 때 리턴하는 특수한 상수 값
	// 여기는 좀 더 고민해 보겠음

	cout << "문자 a는 " << count << "개 있습니다.";

	}
