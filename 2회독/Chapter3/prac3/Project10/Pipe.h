#pragma once
class Pipe {
	int data[10] = { 0 };
	int index;
public:
	Pipe() { index = 0; }
	int arrive(int n);
	int shift();
	void show();
};