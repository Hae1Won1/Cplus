#include<iostream>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	~Dept() { delete[] scores; }
	int getSize() { return size; }
	void read();
	bool isOver60(int index);
};

void Dept::read() {
	cout << size << "개 점수 입력 >> ";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] >= 60) {
		return true;
	}
	return false;
}

// 60점 이상 인원은 count하는 함수
// 복사 생성자가 실행되는 부분
// 복사 생성자가 존재하지 않는 경우 얕은 복사가 이루어지고,
// 아래 함수가 종료될 때 scores가 소멸해버려 실행 오류를 발생시킨다

// 복사 생성자가 존재하지 않을 때는 call by reference를 하면 
// 문제 발생 없이 코드를 실행할 수 있다.
int countPass(Dept &dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}

int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명";
}


/* 1,2번 
#include<iostream>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept) {
		this->size = dept.size;
		this->scores = new int[size];
		for (int i = 0; i < size; i++) {
			this->scores[i] = dept.scores[i];
		}
	}
	~Dept() { delete[] scores; }
	int getSize() { return size; }
	void read();
	bool isOver60(int index);
};

void Dept::read() {
	cout << size << "개 점수 입력 >> ";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] >= 60) {
		return true;
	}
	return false;
}

// 60점 이상 인원은 count하는 함수
// 복사 생성자가 실행되는 부분
// 복사 생성자가 존재하지 않는 경우 얕은 복사가 이루어지고,
// 아래 함수가 종료될 때 scores가 소멸해버려 실행 오류를 발생시킨다
int countPass(Dept dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}

int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명";
}

*/