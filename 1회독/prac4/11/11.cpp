#include<iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill();
	void consume();
	int getSize();
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

//CoffeeVendingMachine
void CoffeeVendingMachine::fill() {
	tong[0].fill();
	tong[1].fill();
	tong[2].fill();
	show();
}
void CoffeeVendingMachine::selectEspresso() {
	tong[0].consume();
	tong[1].consume();
	cout << "에스프레소 드세요\n";
}
void CoffeeVendingMachine::selectAmericano() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();

	cout << "아메리카노 드세요\n";
}
void CoffeeVendingMachine::selectSugarCoffee() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();

	cout << "설탕커피 드세요\n";
}
void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run() {
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while (1) {
		int num;
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
		cin >> num;
		if (num == 1) {
			selectEspresso();
		}
		else if (num == 2) {
			selectAmericano();
		}
		else if (num == 3) {
			selectSugarCoffee();
		}
		else if (num == 4) {
			show();
		}
		else if (num == 5) {
			fill();
		}
	}
}

//Container
void Container::fill() {
	size = 10;
}
void Container::consume() {
	if (size == 0) { cout << "원료가 부족합니다."; return; }
	size -= 1;
}

int Container::getSize() {
	return size;
}

int main() {
	CoffeeVendingMachine c;
	c.run();
}