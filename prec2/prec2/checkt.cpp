#include<iostream>
#include<string>
using namespace std;

int main() {
	char city[21];
	cin.getline(city, 21,'.');
	cout << "도시의 이름은 " << city << "이다";
}