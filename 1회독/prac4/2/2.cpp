#include <iostream>
using namespace std;

int main(){
	int* p = new int[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> *(p + i);
		sum += *(p + i);
	}
	cout << "ЦђБе " << sum / 5.0;
}