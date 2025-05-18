#include<iostream>
using namespace std;

// 문제 : cout과 << 연산자를 이용하여, 1에서 100까지 정수를 한줄에 10개씩 출력
// 작성일 : 250515

int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i*10 + j << '\t';
		}
		cout << '\n';
	}
}

//작은 자릿수의 숫자는 \t만으로도 쉽게 정렬할 수 있다.
//숫자가 커지면 정렬이 깨질 수도 있는데 이런 경우에는
//std::setw()같은 정렬도구를 사용한다고 함.