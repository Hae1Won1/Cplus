#include<iostream>
#include<string>
using namespace std;

// ���� : ���ڿ� �ϳ��� �Է¹ް� 1���������� ��� ���ڰ� ��Ÿ�� ������ �κ� ���ڿ��� ����Ѵ�.
// // �ۼ��� : 250515

int main() {
	char a[100];

	cout << "���ڿ� �Է�>>";
	cin >> a;

	int len, i;
	for (i = 0; i < 100; i++) {
		if (a[i] == '\0') break;
	}

	len = i;

	for (int i = 0; i < len; i++) {
		for (int j = 0; j <= i; j++) {
			cout << a[j];
		}
		cout << '\n';
	}
}