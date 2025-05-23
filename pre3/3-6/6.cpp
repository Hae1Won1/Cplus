#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


class EvenRandom {

public:
	int next();
	int nextInRange(int a, int b);
};

int EvenRandom::next() {
	int n = rand();
	if (n % 2 != 0) n -= 1;
	return n;
}
int EvenRandom::nextInRange(int a, int b) {
	int n;
	while (1) {
		//n = rand() % b; < 구린방식
		n = rand() % (b - a + 1) + a;
		if (n % 2 != 0) n -= 1;
		if (n >= a) break;
	}
	return n;
}
int main() {
	srand((unsigned)time(0)); // rand는 사실 시간에 따라 출력하는 숫자가 정해져 있어 seed를 설정해준다.
	//seed는 한번만 설정해야함

	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜럼 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl;

	cout << "-- 2에서 " << "10까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
}