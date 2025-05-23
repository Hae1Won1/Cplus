#include<iostream>
#include<string>

//istringstream���
#include <sstream>
using namespace std;
class Date {
	int year;
	int month;
	int day;
public:
	Date(int a, int b, int c) { year = a; month = b; day = c; }
	Date(string s);
	void show();
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};

Date::Date(string s) {
// /�� �����Ͽ� �� ����
	istringstream iss(s);
	string str[3];

	string buffer;

	int i = 0;

	//���� ���ڰ� ��Ÿ���� �Է��� ����
	while (getline(iss, buffer, '/')&& i<3) {
		str[i++] = buffer;
	}
	year = stoi(str[0]);
	month = stoi(str[1]);
	day = stoi(str[2]);
}

void Date::show(){
	cout << year << "��" << month << "��" << day << "��\n" ;
	return;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay();
}