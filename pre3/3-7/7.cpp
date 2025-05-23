#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


class Selectable {

public:
	int next(bool q);
	int nextInRange(int a, int b, bool q);
};
//짝수 0, 홀수 1
int Selectable::next(bool q) {
	int n;
	if (!q) {
		n = rand();
		if (n % 2 != 0) n -= 1;
	} 
	else {
		n = rand();
		if (n % 2 == 0) n += 1;
	}
	return n;
}
int Selectable::nextInRange(int a, int b, bool q) {
	int n;

	if (!q) {
		if (a % 2 != 0) a += 1;
		if (b % 2 != 0) b -= 1;
		n = rand() % (b - a + 1);
		if (n % 2 != 0) n += 1;
	}
	else {
		if (a % 2 == 0) a += 1;
		if (b % 2 == 0) b -= 1;
		n = rand() % (b - a + 1);
		if (n % 2 == 0) n += 1;
	}
	return n;
}
int main() {
	srand((unsigned)time(0)); // rand는 사실 시간에 따라 출력하는 숫자가 정해져 있어 seed를 설정해준다.
	//seed는 한번만 설정해야함

	Selectable r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(0);
		cout << n << ' ';
	}
	cout << endl;

	cout << "-- 2에서 " << "10까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10, 1);
		cout << n << ' ';
	}
}