#include<iostream>
using namespace std;

class Professo;
class Student;

class Student {
	int id;
public:
	Student(int id) { this->id = id; }
	friend void show(Student s, Professor p);
};

class Professor {
	string name;
public:
	friend void show(Student s, Professor p);
	Professor(string name) { this->name = name; }
};

void show(Student s, Professor p) {
	cout << s.id << p.name;
}

// 오류: 외부함수인 show가 private 변수에 접근하려 했기때문
// 해결방안 : friend 선언

// 추가 : 전방선언 문제
