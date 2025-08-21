#include<iostream>
#include<string>
using namespace std;

int main() {
	srand((unsigned)time(0));
	string s;

	while (1) {
		cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n" << ">>";
		getline(cin, s);
		if (s == "exit") break;
		if (s.empty()) continue;
		int rsize;
		char n = rand() % 26 + 'a';

		// 글자에 대해서만 변경
		while (1) {
			rsize = rand() % s.length();
			if (s[rsize] != ' ') break;
		}
		s[rsize] = n;

		cout << s << '\n';

	}
}
