#include <iostream>
using namespace std;

class Book {
	string title; // 제목 문자열
	int price; // 가격
public:
	//Book(string s, int a);
	Book(const string title, int price);
	~Book();
	Book(const Book &b);
	void set(string title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

//생성자, 소멸자, set() 함수 작성
/*
Book::Book(string s, int a) {
	int size = s.size();
	title = new char[size];
	for (int i = 0; i < size; i++) {
		title[i] = s[i];
	}
}*/
Book::~Book() {
	//delete title;
}

Book::Book(const string title, int price) {
	//int size = title.size();
	this->title = title;
	//for (int i = 0; i < size; i++) {
	//	this->title[i] = title[i];
	//}
	this->price = price;
}

Book::Book(const Book& b) {
	//int size = b.title.size();
	this->title = b.title;
	//for (int i = 0; i < size; i++) {
	//	this->title[i] = b.title[i];
	//}
	this->price = price;
}

void Book::set(string title, int price) {
	//if (this->title != "\0") {
	//	this->title = "\0";
	//}
	//int size = title.size();
	this->title = title;
	this->price = price;
	//for (int i = 0; i < size; i++) {
	//	this->title[i] = title[i];
	//}
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;// 복사 생성자 호출됨
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}

/**********************************
클래스 복사 char배열과 string 비교	
- char형식 같은 경우에는 배열에 대해
	수동으로 동적 할당 및 문자열 저장을 관리해야함
	소멸자 필요
- stirng 자동으로 관리해주어 간편하게 사용할 수 있음
	소멸자 불필요 <-자동 소멸된다
***********************************/