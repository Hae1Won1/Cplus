#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "3월 1일은 무슨 요일입니까>>";
	string s;
	cin >> s;
	
	cout << "일\t월\t화\t수\t목\t금\t토\n";
	int cnt = 0;

	if (s == "월") {
		cnt=1;
	}
	else if (s == "화") {
		cnt = 2;
	}
	else if (s == "수") {
		cnt = 3;
	}
	else if (s == "목") {
		cnt = 4;
	}
	else if (s == "금") {
		cnt = 5;
	}
	else if (s == "토") {
		cnt = 6;
	}
	
	for (int i = 0; i < cnt; i++) {
		cout << '\t';
	}

	for (int i = 1; i <= 31; i++) {
		cout << i << '\t';
		cnt++;
		if (cnt == 7) {
			cout << '\n';
			cnt = 0;
		}
	}
}