#include<iostream>
#include<string>
using namespace std;

// ���� : ';'���� 5���� �̸��� �����Ͽ� �Է¹ް�, �� �̸��� ����� ȭ�鿡 ���
// �ۼ��� : 250515

int main() {
	char a[5][100];
	int maxindex = 0;

	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n" << ">>";

	for (int i = 0; i < 5; i++) {
		cin.getline(a[i], 100, ';');
	}

	int len = 0;
	int j;

	for (int i = 1; i <= 5; i++) {
		cout << i << " : " << a[i-1] << '\n';
		for (j = 0; j < 100; j++) {
			if (a[i-1][j] == '\0') break;
		}
		if (len < j) {
			len = j+1;
			maxindex = i-1;
		}
	}
	cout << "���� �� �̸��� " << a[maxindex];
}