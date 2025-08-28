#pragma once

#include<iostream>
#include<string>
using namespace std;

class Picture {
	int width;
	int height;
	string place;
public:
	Picture() : Picture(5, 7, "¸ð¸§") {}
	Picture(int width, int height, string place) {
		this->width = width;
		this->height = height;
		this->place = place;
	}
	int getWidth() { return this->width; }
	int getHeight() { return this->height; }
	string getPlace() { return this->place; }
};
