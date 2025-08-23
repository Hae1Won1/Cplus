#include<iostream>
#include<cctype>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main() {
	string s1, s2;
	cout << "텍스트 입력";
	getline(cin, s1);

	cout << "텍스트 입력";
	getline(cin, s2);

	vector<int> text(260,0);
	for (int i = 0; i < s1.size(); i++) {
		if (isalpha(s1[i])) {
			s1[i] = tolower(s1[i]);
		}
	}
	for (int i = 0; i < s2.size(); i++) {
		for (int j = 0; j < s1.size(); j++) {
			if (isalpha(s2[i])) {
				s2[i] = tolower(s2[i]);
			}
			if (s1[j] == s2[i] && text[s2[i]]==0 && isalpha(s2[i])) {
				text[s2[i]]++;
				cout << s2[i] << ' ';
			}
		}	
	}

}