#include<iostream>
#include<string>
using namespace std;

// 문제 : ';'으로 5개의 이름을 구분하여 입력받고, 각 이름을 끊어내어 화면에 출력
// 작성일 : 250515

int main() {
	char a[5][100];
	int maxindex = 0;

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n" << ">>";

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
	cout << "가장 긴 이름은 " << a[maxindex];
}