#include<iostream>
using namespace std;

// ���� : enterŰ �Էµ� ������ ���� �а�, x�� ���� ���
// �ۼ��� : 250515

int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	
	char a[100];
	int count = 0;
	cin.getline(a, 100);
	//cin.getline : char��
	//getline(cin, -) : string��

	int i;
	for (i = 0; i < 100; i++) {
		if (a[i] == '\0') break;
		if (a[i] == 'x') count++;
	}

	cout <<"x�� ������ " << count;
}