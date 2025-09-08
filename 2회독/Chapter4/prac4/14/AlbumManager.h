#pragma once
#include<iostream>
#include"Album.h"
using namespace std;

class AlbumManger {
	Album* albums;
	int num;
public:
	AlbumManger() {
		cout << "장미 앨범에 곡을 저장합니다.\n";
		cout << "곡 개수 입력>>";
		cin >> num;
		// 앞의 라인에서 정수 입력 후 입력된 <Enter>키 제거
		cin.ignore(1);
		albums = new Album[num];
	}
	void findSong() {
		cout << "장미 앨범에서 곡을 검색합니다.\n";\
		while (1) {
			cout << "검색할 곡명 입력>>";
			
			bool isFine = false; 
			string s;
			getline(cin, s);

			if (s == "그만") break;

			for (int i = 0; i < num; i++) {
				if (albums[i].getName() == s) {
					cout << "가수는 " << albums[i].getSinger() << "입니다.\n";
					isFine = true;
				}
			}
			if (!isFine)
				cout << s << "는 없는 곡입니다.\n";
		}
	}


};