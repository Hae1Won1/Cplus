#include<iostream>
#include"Point.h"
using namespace std;

int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setColor("BLUE");
	cp.setPoint(10, 20);
	cp.show();
}