#include <iostream>
#include "Chart.h"
using namespace std;

int main() {
	Chart chart("색 선호도 조사 차트");
	for (int i = 0; i < chart.getNumberOfColors(); i++) {
		cout << chart.getColor(i) << "이 좋은 학생>>";
		int count;
		cin >> count;
		chart.add(i, count);
	}
	chart.draw();

}