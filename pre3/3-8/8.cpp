#include<iostream>
#include<string>
using namespace std;

class Integer {
	int n;
public:
	Integer(int a) { n = a; }
	Integer(string s) { n = stoi(s); }
	int get() { return n; }
	bool isEven() { if (n % 2 == 0) return true; return false; }
	void set(int a) { n = a; }
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}