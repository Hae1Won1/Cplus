#include<iostream>
using namespace std;

int main() {
	int a, b;
	cout << "두 수를 입력하라>>";
	cin >> a >> b;

	int max = a > b ? a : b;
	cout << "큰 수 = " << max;
}
