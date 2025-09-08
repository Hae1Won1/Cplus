#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player {
	string name;
public:
	Player() {
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		cin >> name;
	}
	string getName() {
		return name;
	}
};