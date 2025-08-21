#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person(int id = 1, string name = "Grace", double weigh = 20.5) {
		this->id = id;
		this->name = name;
		this->weight = weigh;
	}
	void show() {
		cout << id << ' ' << weight << ' ' << name << endl;
	}
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}