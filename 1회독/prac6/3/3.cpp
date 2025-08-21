#include <iostream>
using namespace std;

/* 함수 오버로딩
int big(int a, int b) {
	int max = a > b ? a : b;
	if (max > 100) return 100;
	return max;
}
*/
int big(int a, int b, int c = 100) {
	int max = a > b ? a : b;
	if (max > c) return c;
	return max;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}