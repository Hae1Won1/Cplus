#include<iostream>
#include<string>
using namespace std;

// ���� : �̸�, �ּ�, ���̸� �Է¹޾� �ٽ� ���
// �ۼ��� : 250515

int main() {
	char name[20];
	char address[100];
	int age;

	cout << "�̸���?";
	cin.getline(name,20);

	cout << "�ּҴ�?";
	cin.getline(address, 100);

	cout << "���̴�?";
	cin >> age;

	cout << name << ", " << address << ", " << age << "��";
}