#include<iostream>
#include<string>
using namespace std;

// ���� : 5Ģ���� ���α׷� �ۼ�
// �ۼ��� : 250515

//string ���� ����ȯ 
//stoi
int main() {
	char a[100];
	string str[2];
	while (1) {
		char a[100] = { 0 };
		string str[2];

		cout << "?";
		cin.getline(a, 100);

		int index, i;

		for (i = 0; i < 100; i++) {
			if (a[i] == ' ') {
				index = i + 1; //��ȣ�� �ε���
				break;
			}
			str[0] += a[i]; //�� ����
		}

		for (i = index + 2; i < 100; i++) {
			if (a[i] == '\0') break;
			str[1] += a[i];
		}

		if (a[index] == '+') {
			cout << stoi(str[0]) << " " << a[index] << " " << stoi(str[1])<< " = " << stoi(str[0]) + stoi(str[1]) << '\n';
		}
		else if (a[index] == '*') {
			cout << stoi(str[0]) << " " << a[index] << " " << stoi(str[1]) << " = " << stoi(str[0]) * stoi(str[1]) << '\n';
		}
		else if (a[index] == '-') {
			cout << stoi(str[0]) << " " << a[index] << " " << stoi(str[1]) << " = " << stoi(str[0]) - stoi(str[1]) << '\n';
		}
		else if (a[index] == '/') {
			cout << stoi(str[0]) << " " << a[index] << " " << stoi(str[1]) << " = " << stoi(str[0]) / stoi(str[1]) << '\n';
		}
		else if (a[index] == '%') {
			cout << stoi(str[0]) << " " << a[index] << " " << stoi(str[1]) << " = " << stoi(str[0]) % stoi(str[1]) << '\n';
		}

		//cout << stoi(str[0]) << " " << a[index] << " " << stoi(str[1])<< " = " << stoi(str[0]) * stoi(str[1]);
	}


}