#include<iostream>
using namespace std;

char dummy = '\0';
/* 위와 같이 전역으로 dummy를 선언한 이유 ********
전역 변수는 프로그램 전체에서 존재(lifetime = static)

함수가 끝나도 사라지지 않기 때문에
참조로 반환해도 안전
************************************************ */


char& find(char a[], char c, bool& success);

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm'; // 'M' 위치에 'm' 기록
	cout << s << endl; // "mike"가 출력됨
}

//문자열 a에서 문자 c를 찾아, 문자 c가 있는 공간에 대한 참조를 리턴
//만일 문자 c를 찾을 수 없다면 success 참조 매개 변수에 false를 설정
char& find(char a[], char c, bool& success) {
	int i=0;
	while (a[i] != '\0') {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
		i++;
	}
	success = false;
	return dummy;
}
