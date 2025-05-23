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
		//n = rand() % b; < �������
		n = rand() % (b - a + 1) + a;
		if (n % 2 != 0) n -= 1;
		if (n >= a) break;
	}
	return n;
}
int main() {
	srand((unsigned)time(0)); // rand�� ��� �ð��� ���� ����ϴ� ���ڰ� ������ �־� seed�� �������ش�.
	//seed�� �ѹ��� �����ؾ���

	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl;

	cout << "-- 2���� " << "10������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
}