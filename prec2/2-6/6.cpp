#include<iostream>
#include<string>
using namespace std;

// ���� : ���ڿ� �� �� �Է¹ް� �� ���� ���ڿ��� ������ �˻�
// �ۼ��� : 250515

int main() {
	string a, b;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> a;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> b;

	if (a == b) {
		cout << "�����ϴ�";
	}
	else{
		cout << "���� �ʽ��ϴ�";
	}

}