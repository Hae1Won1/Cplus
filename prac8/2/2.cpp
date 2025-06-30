#include<iostream>
#include"Circle.h"
using namespace std;

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() {
	}
	NamedCircle(int r, string name) {
		this->setRadius(r);
		this->name = name;
	}
	void show() {
		cout << "반지름이 " << this->getRadius() << "인 " << name;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

int main() {
	NamedCircle pizza[5];
	int maxIndex = 0;
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		int r;
		string name;
		cin >> r >> name;
		pizza[i].setRadius(r);
		pizza[i].setName(name);

		if (i - 1 >= 0 && pizza[maxIndex].getRadius() < r) maxIndex = i;
	}
	cout << "가장 면적이 큰 피자는 " << pizza[maxIndex].getName() << "입니다";
}
