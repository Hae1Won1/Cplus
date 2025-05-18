#include<iostream>
#include<string>
using namespace std;

// 문제 : 영문 텍스트를 입력받아 알파벳 히스토그램을 작성
// 작성일 : 250515

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