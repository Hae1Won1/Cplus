#include<iostream>
using namespace std;

// ���� : Ŀ�Ǹ� �ֹ��ϴ� ���α׷�
// �ۼ��� : 250515


//strcmp : �� ���ڿ��� ���� ���Ͽ� ���ٸ� 1, �ٸ��ٸ� 0
int main() {

	int money = 0;
	int max = 20000;

	while (money < max) {
		cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
		cout << "�ֹ�>> ";

		char order[20];
		int num, cheap;
		cin >> order >> num;

		if (strcmp(order, "����������") == 0) {
			cheap = 2000 * num;
		}else if (strcmp(order, "�Ƹ޸�ī��") == 0) {
			cheap = 2300 * num;
		}else if (strcmp(order, "īǪġ��") == 0) {
			cheap = 2500 * num;
		}
\
		cout << cheap << "���Դϴ�. ���ְ� �弼��\n";
		money += cheap;
	}
	cout << "���� " << money << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
}