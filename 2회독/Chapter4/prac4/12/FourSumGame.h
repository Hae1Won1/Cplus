#pragma once
#include <iostream>
#include<string>
using namespace std;


class Player {
	string name;
public:
	Player() {
		srand((unsigned)time(0));
		cout << "선수 이름>>";
		cin >> name;
	}
	bool playing() {
		int sum, num;
		cout << name << "님, 예상 합과 수 입력하세요>>";
		cin >> sum >> num;
		int randNum = rand() % 3;

		cout << "에상 합 " << sum << ", " << name
			<< " " << num << ", 컴 " << randNum << " : ";
		if (sum == randNum + num)
			cout << name << "님 승리!!\n";
		else
			cout << "실패!\n";
		return sum == randNum + num;
	}
};
class FourSumGame {
	Player* players;
	int member;
public:
	FourSumGame(int member) {
		this->member = member;
		players = new Player[member];
	}
	void run() {
		bool isWin = false;
		while (!isWin) {
			for (int i = 0; i < member; i++) {
				isWin = players[i].playing();
				if (isWin) {
					break;
				}
			}
		}
	}
};
