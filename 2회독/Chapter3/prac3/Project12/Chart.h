#pragma once
#include<iostream>
using namespace std;
#define num 3
class Chart {
	string name;
	int numberOfColors;
	string color[num];
	int count[num];
	int allCount = 0;
public:
	Chart(string name) { 
		this->name = name; 
		numberOfColors = 3;
		color[0] = "빨강";
		color[1] = "파랑";
		color[2] = "노랑";
	}
	~Chart() { cout << "차트 데이터는 저장되지 않고 사라집니다.\n"; }
	int getNumberOfColors() { return numberOfColors; }
	string getColor(int n) {
		return color[n];
	}
	void add(int index, int n) {
		count[index] = n;
	}
	void draw() {
		cout << name << "*********************\n";
		for (int i = 0; i < num; i++) {
			allCount += count[i];
		}
		for (int i = 0; i < num; i++) {
			cout << color[i] << "; " << (double)count[i] / allCount * 100
				<< "%\n";
		}
		cout << "******************************************\n";
	}
};