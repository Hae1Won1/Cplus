#include <iostream>
using namespace std;

class ArrayUtillity2 {
public:
	// s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* concat(int s1[], int s2[], int size);

	// s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하며 리턴
	// 리턴하는 배열의 크기는 retSize에 전달. retSize가 0인 경우 NULL 리턴
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

//배열 합치기
int* ArrayUtillity2::concat(int s1[], int s2[], int size) {
	int* tmp = new int[size * 2];
	for (int i = 0; i < size; i++) {
		tmp[i] = s1[i];
	}
	for (int i = 0; i < size; i++) {
		tmp[i + size] = s2[i];
	}
	return tmp;
}

int* ArrayUtillity2::remove(int s1[], int s2[], int size, int& retSize) {
	int* tmp = new int[size];
	int count = 0;
	if (retSize == 0) return 0;
	for (int i = 0; i < size; i++) {
		if (count == retSize) return tmp;
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) break;
		}
		tmp[count++] = s1[i];
	}
}

int main() {
	int num = 5;
	int* x = new int[num];
	int* y = new int[num];
	cout << "정수를 " << num << " 개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < num; i++) {
		cin >> x[i];
	}
	cout << "정수를 " << num << " 개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < num; i++) {
		cin >> y[i];
	}

	cout << "합친 정수 배열을 출력한다" << endl;
	int* z = ArrayUtillity2::concat(x, y, num);
	for (int i = 0; i < num * 2; i++) {
		cout << z[i] << ' ';
	}
	cout << endl;

	delete[] z;

	int retSize = num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (x[i] == y[j]) {
				retSize--;
				break;
			}
		}
	}

	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	int* r = ArrayUtillity2::remove(x, y, num, retSize);
	for (int i = 0; i < retSize ; i++) {
		cout << r[i] << ' ';
	}
	delete[] r;
}
