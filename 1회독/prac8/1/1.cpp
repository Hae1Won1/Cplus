#include<iostream>
#include"Circle.h"
using namespace std;

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int r, string name) {
		this->setRadius(r);
		this->name = name;
	}
	void show() {
		cout << "반지름이 " << this->getRadius() << "인 " << name;
	}
};

int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show();
}