#include<iostream>
using namespace std;

// ���� : cout�� << �����ڸ� �̿��Ͽ�, ������ ���
// �ۼ��� : 250515

int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout <<  j <<"x"<<i<<"="<<i*j << '\t';
		}
		cout << '\n';
	}
}
