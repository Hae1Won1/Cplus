#include "Calculator.h"
#include <iostream>
using namespace std;

int main(){
	Add a;
	Sub s;
	Mul m;
	Div d;

	while (1) {
		int x, y;
		char c;
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> c;

		if (c == '+') {
			a.setValue(x, y);
			cout << a.calculate();
		}else if (c == '-') {
			s.setValue(x, y);
			cout << s.calculate();
		}else if (c == '*') {
			m.setValue(x, y);
			cout << m.calculate();
		}else if (c == '/') {
			d.setValue(x, y);
			cout << d.calculate();
		}	
		cout << endl;
	}
}