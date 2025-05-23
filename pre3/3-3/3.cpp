#include<iostream>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string s, int id, int m);
	void deposit(int n);
	int withdraw(int n);
	string getOwner();
	int inquiry();
};

Account::Account(string s, int n, int m) {
	name = s;
	id = n;
	balance = m;
}

void Account::deposit(int n) {
	balance += n;
}

int Account::withdraw(int n) {
	if (balance >= n) {
		balance -= n;
		return n;
	}
	else {
		cout << "ÀÜ¾×ÀÌ ºÎÁ·ÇÕ´Ï´Ù.";
		return 0;
	}
}

string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}