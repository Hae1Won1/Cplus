#include<iostream>
using namespace std;

// text를 더할 때, 더하기 전에 공백 한칸
void combine(string t1, string t2, string &t3) {
	t3 = t1 + ' ' + t2;
	return;
}

int main() {
	string text1("I love you"), text2("very much");
	string text3;
	combine(text1, text2, text3);
	cout << text3;
}
