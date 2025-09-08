#pragma once
#include <iostream>
#include "Player.h"
using namespace std;

class WordGame {
	int peopleNum;
	Player* p;
	string word;
public:
	WordGame() {
		cout << "끝말 잇기 게임을 시작합니다\n";
		cout << "게임에 참가하는 인원은 몇명입니까?\n";

		cin >> peopleNum;
		p = new Player[peopleNum];
		word = "아버지";
		
		cout << "시작하는 단어는 " << word << "입니다\n";
		gamePlay();
	}
	void gamePlay() {
		int cnt = 0;
		string prevWord = word;
		string currWord;
	
		while (1) {
			if (cnt >= peopleNum) cnt = 0;
			cout << p[cnt].getName() << ">>";
			cin >> currWord;
			int index = prevWord.size()-1;
			if (prevWord[index] == currWord[1] && prevWord[index - 1] == currWord[0]) {
				cnt++;
				prevWord = currWord;
			}
			else break;
		}
	}

};