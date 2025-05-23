#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random {

public:
	int next();
	int nextInRange(int a, int b);
};

int Random::next() {
	return rand();
}
int Random::nextInRange(int a, int b) {
	int n;
	while (1) {
		//n = rand() % b; < �������
		n = rand() % (b-a+1) + a;
		if (n >= a) break;
	}
	return n;
}
int main() {
	srand((unsigned)time(0)); // rand�� ��� �ð��� ���� ����ϴ� ���ڰ� ������ �־� seed�� �������ش�.
	//seed�� �ѹ��� �����ؾ���

	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl;

	cout << "-- 2���� " << "4������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2,4);
		cout << n << ' ';
	}
}