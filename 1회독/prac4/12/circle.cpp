#include<iostream>
#include"circle.h"

//Circle
void Circle::setCircle(string name, int radius) {
	this->radius = radius;
	this->name = name;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}
string Circle::getName() {
	return name;
}

//CircleManager
CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	for (int i = 0; i < size; i++) {
		string s;
		int r;
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> s >> r;
		(p + i)->setCircle(s, r);
	}
}
CircleManager::~CircleManager() {
	delete[] p;
}
void CircleManager::searchByName() {
	string s;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> s;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getName() == s) {
			cout << "도넛의 면적은 " << (p + i)->getArea() << endl;
			return;
		}
	}
}
void CircleManager::searchByArea() {
	int n;
	cout << "최소 면적을 정수로 입력하세요 >>";
	cin >> n;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getArea() > n) {
			cout << (p + i)->getName() << "의 면적은 " << (p + i)->getArea() << ",";
		}
	}
}
