#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n";


	while (1) {
		cout << ">>";
		getline(cin, s);
		if (s == "exit") break;
		if (s.empty()) continue;
		
		for (int i = 0; i < s.size()/2; i++) {
			char tmp = s[i];
			s[i] = s[s.size() - i - 1];
			 s[s.size() - i - 1] = tmp;
		}
		cout << s << '\n';
	}
}
