#include "Ram.h"
#include<iostream>
using namespace std;

Ram::Ram() {
	//	fill(mem, mem + 100 * 1026, 0);
	//	�ð� ȿ�� memset ��
	memset(mem, 0, sizeof(mem));
	size = 100 * 1024;
}
Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}