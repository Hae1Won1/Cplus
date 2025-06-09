#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int valude) { this->value = valude; }
	//자기 자신의 주소 반환 *this
	Accumulator& add(int n) { this->value += n; return *this; }
	int get() { return value; }
};
int main() {
	Accumulator acc(10);

	//값 수정과, 주소의 반환을 동시에 진행
	acc.add(5).add(6).add(7);
	cout << acc.get();
}