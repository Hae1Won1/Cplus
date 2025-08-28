#pragma once
#include<iostream>
using namespace std;
class Oval {
	int width;
	int height;
public:
	Oval() :Oval(1, 1) {}
	Oval(int width, int height) {
		this->width = width;
		this->height = height;
	}
	~Oval() {
		cout << "Oval ¼Ò¸ê: " << width << "x" << height << '\n';
	}
	inline int getWidth() { return width; }
	inline int getHeight() { return height; }
	void set(int width, int height) {
		this->width = width;
		this->height = height;
	}
	void show() {
		cout << "width=" << width << ", height=" << height << '\n';
	}
	double area(){
		return (double)width * height ;
	}
};