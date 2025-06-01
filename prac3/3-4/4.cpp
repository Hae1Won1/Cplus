#include<iostream>
using namespace std;

class CoffeeMachine {
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int a, int b, int c);
	void drinkEsopresso();
	void drinkAnericano();
	void drinkSugarCoffe();
	void show();
	void fill() { coffee = 10; water = 10; sugar = 10; }
};
CoffeeMachine::CoffeeMachine(int a, int b, int c) {
	coffee = a;
	water = b;
	sugar = c;
}

void CoffeeMachine::drinkEsopresso() {
	if (!((coffee == 0) || (water == 0))) {
		coffee--;
		water--;
	}
}
void CoffeeMachine::drinkAnericano() {
	if (!((coffee == 0) || (water == 0))) {
		coffee--;
		water-=2;
	}
}
void CoffeeMachine::drinkSugarCoffe() {
	if (!((coffee == 0) || (water == 0)||(sugar==0))) {
		coffee--;
		water -= 2;
		sugar--;
	}
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEsopresso();
	java.show();
	java.drinkAnericano();
	java.show();
	java.drinkSugarCoffe();
	java.show();
	java.fill();
	java.show();
}