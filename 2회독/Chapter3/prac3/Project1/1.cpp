#include <iostream>
#include "Picture.h"
using namespace std;

int main() {
	Picture pic;
	Picture mt(10, 14, "ÇÑ¶ó»ê");
	cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << '\n';
	cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << '\n';

}