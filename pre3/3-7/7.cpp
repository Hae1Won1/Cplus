#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


class Selectable {

public:
	int next(bool q);
	int nextInRange(int a, int b, bool q);
};
//¦�� 0, Ȧ�� 1
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
	srand((unsigned)time(0)); // rand�� ��� �ð��� ���� ����ϴ� ���ڰ� ������ �־� seed�� �������ش�.
	//seed�� �ѹ��� �����ؾ���

	Selectable r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(0);
		cout << n << ' ';
	}
	cout << endl;

	cout << "-- 2���� " << "10������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10, 1);
		cout << n << ' ';
	}
}