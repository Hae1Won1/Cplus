#include<iostream>
using namespace std;

// ���� : �ֹ��� �Է�, �߸��� �Է� ��ȯ
// �ۼ��� : 250515

int main() {
	int a,n;
	string menu;
	
	while (1) {
		cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
		cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";

		cin >> a;
		if (a == 4) break;
		else if (a == 1) {
			menu = "«��";
		}
		else if (a == 2) {
			menu = "¥��";
		}
		else if (a == 3) {
			menu = "������";
		}
		else {
			cout << "�ٽ� �ֹ� �ϼ���!!\n";
			continue;
		}

		cout << "���κ�?";
		cin >> n;

		cout << menu << " " << n << "�κ� ���Խ��ϴ�\n";
	}
	cout << "���� ������ �������ϴ�.";
}