#include<iostream>
using namespace std;

// 문제 : cout과 << 연산자를 이용하여, 구구단 출력
// 작성일 : 250515

int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout <<  j <<"x"<<i<<"="<<i*j << '\t';
		}
		cout << '\n';
	}
}
