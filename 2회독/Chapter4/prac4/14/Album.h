#pragma once
#include <iostream>
#include <string>
using namespace std;

class Album {
	string name;
	string singer;
public:
	Album() {
		cout << "°î¸í? ";
		getline(cin, name);
		cout << "°¡¼ö? ";
		getline(cin, singer);
	}
	string getName() {
		return name;
	}
	string getSinger() {
		return singer;
	}
};
