#include<iostream>
using namespace std;

// ���� : C�� C++�� ��ȯ
// // �ۼ��� : 250515

int main() {
	int n;
	
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;

	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.\n";
}