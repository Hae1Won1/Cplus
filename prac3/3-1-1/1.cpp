#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower();
	Tower(int n) { height = n; }
	int getHeight() { return height; }
};
Tower::Tower() : Tower(1) {}

int main() {
	Tower myTower;
	Tower seoulTower(100); 

	cout << "높이는 " << myTower.getHeight() << "미터\n";
	cout << "높이는 " << seoulTower.getHeight() << "미터\n";
}