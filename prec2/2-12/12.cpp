#include<iostream>
using namespace std;

// ���� : C�� C++�� ��ȯ
// �ۼ��� : 250515
int sum(int a, int b);

int main() {
	int n;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;

	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�.\n";
}

int sum(int a, int b) {
	int res = 0;
	for (int i = a; i <= b; i++) {
		res += i;
	}
	return res;
}