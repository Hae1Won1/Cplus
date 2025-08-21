#pragma once
#include<iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint() : Point(0, 0) {
		this->color = "BLACK";
	}
	ColorPoint(int x, int y, string color) : Point(x, y) {
		this->color = color;
	}
	ColorPoint(int x, int y) : Point(x, y) {
		this->color = "BLACK";
	}
	void setPoint(int x, int y) {
		move(x, y);
	}
	void setColor(string color) { this->color = color; }
	void show() {
		cout << this->color << "색으로 (" << this->getX() << ","
			<< this->getY() << ")에 위치한 점입니다." << endl;
	}
};