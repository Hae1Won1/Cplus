#include <iostream>
using namespace std;

/* 함수 오버로딩
int add(int* a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
*/

// nullptr : 널 포인터 
int add(int* a, int n, int *b = nullptr) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if(b == nullptr){
            sum += a[i];
        }
        else {
            sum += a[i] + b[i];
        }
    }
    return sum;
}
int main()
{
    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 6, 7, 8, 9, 10 };

    int c = add(a, 5);
    int d = add(a, 5, b);

    cout << c << endl;
    cout << d << endl;
}
