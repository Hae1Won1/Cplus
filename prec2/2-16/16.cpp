#include<iostream>
#include<string>
using namespace std;

// ���� : ���� �ؽ�Ʈ�� �Է¹޾� ���ĺ� ������׷��� �ۼ�
// �ۼ��� : 250515

int main() {
	char text[10000];
	int all = 0;
	int alpha[26] = {0};

	cin.getline(text,10000,';');

	for (int i = 0; i < 10000; i++) {
		if (text[i] == '\0') break;
		for (int j = 'a'; j <= 'z'; j++) {
			if (text[i] == j) {
				alpha[j - 'a']++;
				all++;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 65) << " (" << alpha[i] << ")\t: ";
		for (int j = 0; j < alpha[i]; j++) {
			cout << "*";
		}
		cout << '\n';
	}
}