#include<iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원" << pages << "페이지" << endl;
	}

	//bool operator == (Book b) {
	//	if ((this->title == b.title) && (this->price == b.price) && (this->pages == b.pages)) return true;
	//	return false;
	//}
	//bool operator == (int n) {
	//	if (this->price == n) return true;
	//	return false;
	//}
	//bool operator == (string s) {
	//	if (this->title == s) return true;
	//	return false;
	//}
	friend bool operator == (Book a, Book b);
	friend bool operator == (Book a, int n);
	friend bool operator == (Book a, string s);
	string getTitle() { return title; }
};

bool operator == (Book a, Book b) {
	if ((a.title == b.title) && (a.price == b.price) && (a.pages == b.pages)) return true;
	return false;
}

bool operator == (Book a, int n) {
	if (a.price == n) return true;
	return false;
}

bool operator == (Book a, string s) {
	if (a.title == s) return true;
	return false;
}
int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교
}