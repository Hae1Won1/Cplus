#include<iostream>
#include<string>
//strcmp�� ����ϱ� ����. c������ �����ϰ� ��� ����
using namespace std;

// ���� : yes�� �Էµ� ������ �������� �ʴ� ���α׷�
// �ۼ��� : 250515

int main() {
	char a[100];
	
	while (1) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(a, 100);
		if (strcmp(a, "yes") == 0) break;
	}
}