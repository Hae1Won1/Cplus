#include<iostream>
#include<string>
using namespace std;

#pragma once
class Alphabet {
	int count = 0;
	char name;
public:
	Alphabet(char name) { this->name = name; }
	void setCount();
	void print();
};
class Histogram {
	int count = 0;
	string str;
	Alphabet *al = new Alphabet[26]
	{ Alphabet('a'),Alphabet('b') ,Alphabet('c') ,Alphabet('d') ,Alphabet('e') ,Alphabet('f'),
	Alphabet('g'),	Alphabet('h'),	Alphabet('i'),	Alphabet('j'),	Alphabet('k'),	Alphabet('l')
	,	Alphabet('m'),	Alphabet('n'),	Alphabet('o'),	Alphabet('p'),	Alphabet('q'),	Alphabet('r')
	,	Alphabet('x'),	Alphabet('t'),	Alphabet('u'),	Alphabet('v'),	Alphabet('w'),	Alphabet('x')
	,	Alphabet('y'),	Alphabet('z') };
public:
	Histogram(string str);
	void put(string s) { str += s; };
	void putc(char c) { str += c; };
	void setCount();
};

Histogram::Histogram(string str) {
	this->str = str;
	for (int i = 0; i < this->str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			al[str[i]].setCount();
		}
	}
}

void Alphabet::setCount() {
	count++;
}

// Histogram
// 대문자는 모두 소문자로 변환
// 변환한 Alphabet 클래스에 대해 count 
// 총 알파벳 개수 count
// 
// Alphabet
// ***히스토그램 출력 부분 필요
// 
// 각 알파벳에 대한 Histogram 클래스를 생성하고, count와 알파벳 char을 저장함