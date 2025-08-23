#include <iostream>
using namespace std;

int main() {
	int x1, x2, y1, y2;
	cout << "사각형의 두 점(x1, y1, x2, y,2)을 입력하세요>>";
	cin >> x1 >> y1 >> x2 >> y2;

	cout << "타원의 면적은 " << (x2 - x1) * (y2 - y1) * 3.14 / 4;
}