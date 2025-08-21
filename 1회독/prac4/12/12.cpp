#include<iostream>
#include"circle.h"
using namespace std;

int main() {
	int num;
	cout << "원의 개수 >> ";
	cin >> num;

	CircleManager c(num);
	c.searchByName();
	c.searchByArea();
}