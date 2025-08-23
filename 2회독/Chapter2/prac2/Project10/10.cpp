#include<iostream>
#include<string>
using namespace std;

int main() {
	string s = "";
	while (1) {
		cout << "영문 텍스트를 입력하세요(빈칸 포함 가능))>>";
		getline(cin, s);
		int word = 0;

		if (s == "exit") break;

		if (!s.empty()) {
			word++;
		}

		for (char c : s) {			
			if (c == ' ') {
				word++;
			}
		}
		cout << "단어의 개수는 " << word << "개이다." << '\n';
	}
}