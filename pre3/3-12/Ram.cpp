#include "Ram.h"
#include<iostream>
using namespace std;

Ram::Ram() {
	//	fill(mem, mem + 100 * 1026, 0);
	//	시간 효율 memset 승
	memset(mem, 0, sizeof(mem));
	size = 100 * 1024;
}
Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}