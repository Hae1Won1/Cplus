#include <iostream>
#include<ctime>
using namespace std;

int main() {
	cout << "*** 구구단 맞추기 퀴즈입니다. ***" << '\n';
	int wrong = 0;

	srand((unsigned)time(0));

	while (1) {
		int a = rand()%8 + 1;
		int b = rand()%8 + 1;

		cout << a << 'x' << b << '=';
		
		int ans = 0;
		cin >> ans;
		
		if (ans == a * b) {
			cout << "정답입니다. 잘했습니다.\n";
		}
		else {
			cout << ++wrong << "번 틀렸습니다. ";
			if (wrong < 3) {
				cout << "분발하세요.\n";
			}
			else {
				break;
			}
		}
	}
	cout << "퀴즈. 종료합니다.\n";

}