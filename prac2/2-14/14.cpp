#include<iostream>
using namespace std;

// 문제 : 커피를 주문하는 프로그램
// 작성일 : 250515


//strcmp : 두 문자열의 값을 비교하여 같다면 1, 다르다면 0
int main() {

	int money = 0;
	int max = 20000;

	while (money < max) {
		cout << "에소프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
		cout << "주문>> ";

		char order[20];
		int num, cheap;
		cin >> order >> num;

		if (strcmp(order, "에소프레소") == 0) {
			cheap = 2000 * num;
		}else if (strcmp(order, "아메리카노") == 0) {
			cheap = 2300 * num;
		}else if (strcmp(order, "카푸치노") == 0) {
			cheap = 2500 * num;
		}
\
		cout << cheap << "원입니다. 맛있게 드세요\n";
		money += cheap;
	}
	cout << "오늘 " << money << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
}