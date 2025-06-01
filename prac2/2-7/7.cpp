#include<iostream>
#include<string>
//strcmp를 사용하기 위함. c언어에서와 동일하게 사용 가능
using namespace std;

// 문제 : yes가 입력될 때까지 종료하지 않는 프로그램
// 작성일 : 250515

int main() {
	char a[100];
	
	while (1) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(a, 100);
		if (strcmp(a, "yes") == 0) break;
	}
}