#include<iostream>
#include<string>
using namespace std;

// 문제 : 이름, 주소, 나이를 입력받아 다시 출력
// 작성일 : 250515

int main() {
	char name[20];
	char address[100];
	int age;

	cout << "이름은?";
	cin.getline(name,20);

	cout << "주소는?";
	cin.getline(address, 100);

	cout << "나이는?";
	cin >> age;

	cout << name << ", " << address << ", " << age << "세";
}