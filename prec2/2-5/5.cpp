#include<iostream>
using namespace std;

// 문제 : enter키 입력될 때까지 문자 읽고, x의 개수 출력
// 작성일 : 250515

int main() {
	cout << "문자들을 입력하라(100개 미만).\n";
	
	char a[100];
	int count = 0;
	cin.getline(a, 100);
	//cin.getline : char형
	//getline(cin, -) : string형

	int i;
	for (i = 0; i < 100; i++) {
		if (a[i] == '\0') break;
		if (a[i] == 'x') count++;
	}

	cout <<"x의 개수는 " << count;
}