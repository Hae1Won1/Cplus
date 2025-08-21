#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() { cout << "반지름이 " << radius << "인 원" << endl; }
};

void increaseBy(Circle &a, Circle b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main() {
	Circle x(10), y(5);
	increaseBy(x, y); // x의 반지름이 15인 원을 만들고자 한다.
	x.show(); // "반지름이 15인 원"을 출력한다.
}

/***** 기존 코드 ***** 
call by value로 작성자의 의도와는 달리
새로운 Circle a 클래스가 복제되었다 소멸한다.
따라서 call by reference로 함수를 수정한다.
*********************/