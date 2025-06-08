#include<iostream>
using namespace std;

class Circle {

};

void swap(Circle& a, Circle& b) {
	Circle c = a;
	a = b;
	b = c;
	return;
}