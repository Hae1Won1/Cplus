#include <iostream>
using namespace std;

class Oval {
	int width, height;
public:
	Oval();
	Oval(int a, int b);
	int getWidth() { return width; }
	int getHeight() { return height; }
	void set(int w, int h) { width = w; height = h;}
	void show();
	~Oval();
};

Oval::Oval() { width = 1, height = 1; }
Oval::Oval(int a, int b) { width = a; height = b; }
void Oval::show() {
	cout << "width = " << width << " height = " << height << endl;
}
Oval::~Oval() { 
//	cout << "Oval ¼Ò¸ê : " << show() << endl; 
	cout << "Oval ¼Ò¸ê : " << "width = " << width << " height = " << height << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}