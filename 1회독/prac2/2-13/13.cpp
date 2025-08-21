#include<iostream>
using namespace std;

// 문제 : 주문을 입력, 잘못된 입력 반환
// 작성일 : 250515

int main() {
	int a,n;
	string menu;
	
	while (1) {
		cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";

		cin >> a;
		if (a == 4) break;
		else if (a == 1) {
			menu = "짬뽕";
		}
		else if (a == 2) {
			menu = "짜장";
		}
		else if (a == 3) {
			menu = "군만두";
		}
		else {
			cout << "다시 주문 하세요!!\n";
			continue;
		}

		cout << "몇인분?";
		cin >> n;

		cout << menu << " " << n << "인분 나왔습니다\n";
	}
	cout << "오늘 영업은 끝났습니다.";
}