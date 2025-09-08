# 4장 요약 — 객체 포인터·배열, 동적 생성, this, `std::string` (C++)

## 4-1 객체 포인터

- 주소 취득: `&obj`
- 멤버 접근
    - 객체: `obj.func()`
    - 포인터: `ptr->func()` 또는 `(*ptr).func()`

```cpp
Circle donut;
Circle* p = &donut;

double d = donut.getArea();
d = p->getArea();
d = (*p).getArea();

```

> 포인터는 초기화 후 사용해야 함.
> 

---

## 4-2 객체 배열

- 선언 시 **기본 생성자**가 원소 수만큼 호출됨.
- 원소 접근: `arr[i].member`

```cpp
Circle circleArray[3];           // 기본 생성자 3회
for (int i=0;i<3;i++)
  std::cout << circleArray[i].getArea() << '\n';

// 포인터로 순회
Circle* p = circleArray;         // = &circleArray[0]
for (int i=0;i<3;i++, p++)
  std::cout << p->getArea() << '\n';

// 동일한 표현들
for (int i=0;i<3;i++) std::cout << (* (circleArray + i)).getArea() << '\n';
for (int i=0;i<3;i++) std::cout << (p + i)->getArea() << '\n';

```

- 소멸 순서: 높은 인덱스 → 낮은 인덱스 (각 원소의 소멸자 호출)
- 초기화

```cpp
Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

```

- 다차원

```cpp
Circle circles[2][3] = {
  { Circle(1), Circle(2), Circle(3) },
  { Circle(4), Circle(5), Circle() }
};

```

---

## 4-3 동적 메모리 (new/delete)

- 기본형/클래스 모두 가능

```cpp
int*    pi = new int(20);
char*   pc = new char('a');
Circle* pcir = new Circle(10);

delete pi;
delete pc;
delete pcir;

```

- 배열 동적 할당은 **반드시** `delete[]`:

```cpp
int* a = new int[5]{1,2,3,4,5};  // C++11 이상
// ... 사용 ...
delete[] a;

```

> 참고: 표준 C++에서 new는 할당 실패 시 기본적으로 std::bad_alloc 예외를 던집니다. 예외를 원치 않으면 new(std::nothrow)를 사용하고 널체크를 하세요.
> 
- 메모리 누수 주의: 동적으로 받은 주소를 잃어버리지 않기.

---

## 4-4 객체(배열)의 동적 생성·반환

```cpp
// 단일 객체
Circle* p = new Circle(10);
delete p;

// 객체 배열
Circle* arr = new Circle[3];     // 기본 생성자 3회
// ... 사용 ...
delete[] arr;

```

- 인덱스 vs 포인터 이동

| 항목 | 인덱스(`arr[i]`) | 포인터 이동(`p->`, `p++`) |
| --- | --- | --- |
| 주소 변화 | 고정 | 루프마다 증가 |
| 루프 후 사용 | 즉시 가능 | 원위치 필요 |

---

## 4-5 `this` 포인터

- 멤버 함수 내부에서 “자기 객체”를 가리키는 포인터.
- 매개변수와 멤버 이름이 겹칠 때 명확화, 체이닝 반환 등에 사용.
- **정적 멤버 함수에서는 사용 불가.**

```cpp
class Circle {
  int radius;
public:
  Circle()            : radius(1) {}
  Circle(int radius)  { this->radius = radius; }
  void setRadius(int radius) { this->radius = radius; }
  Circle& grow(int d) { radius += d; return *this; } // 체이닝
};

```

> C++에서는 널 포인터는 nullptr 권장 (NULL/0 대신).
> 

---

## 4-6 `std::string` 사용

- 헤더: `<string>`, 네임스페이스: `std`
- 동적 크기 조절, 출력·입력·연결·검색·치환 등 풍부한 기능

```cpp
#include <string>
#include <iostream>
using namespace std;

string s1;                         // ""
string s2("서울시 성북구 삼선동 389");
string s3 = s2;                    // 복사

// 입력
cin >> s1;                         // 공백 전까지
getline(cin, s1);                  // 한 줄 전체

// 연결
s1 += " C++";
s1.append(" Great!");

// 비교
if (s1 == s2) { /* ... */ }
if (s1 < s2)  { /* 사전식 비교 */ }

// 길이/용량
size_t len = s1.length();          // == size()
size_t cap = s1.capacity();

// 삽입/치환/삭제/부분문자열
s1.insert(2, "**");
s1.replace(0, 2, "Hi");
s1.erase(0, 3);
string sub = s1.substr(0, 4);

// 검색
size_t pos = s1.find("C++");
if (pos != string::npos) { /* 발견 */ }

// 인덱싱
char c = s1.at(0);
s1[0] = 'X';

// 숫자 변환
int y = stoi("2014");              // 2014

```

> 문자 판정·대소문자 변환 등은 <cctype>의 std::toupper, std::isdigit, std::isalpha 등을 활용.
> 

```cpp
#include <cctype>
for (char& ch : s1) ch = std::toupper(static_cast<unsigned char>(ch));
if (std::isdigit(s1[0])) { /* ... */ }

```

---

## 미니 연습 (개념 점검)

```cpp
// 1) 포인터로 객체 멤버 호출
Polygon poly;
Polygon* pp = &poly;
pp->draw();

// 2) 동적 배열 최대값
int* q = new int[5];
for (int i=0;i<5;i++) std::cin >> q[i];
int mx = q[0];
for (int i=1;i<5;i++) mx = std::max(mx, q[i]);
std::cout << mx << '\n';
delete[] q;

// 3) 객체 배열 순회(포인터)
int sum = 0;
for (int i=0;i<3;i++) sum += (arr + i)->get();

// 4) 2차원 배열 합
int sum2 = 0;
for (int i=0;i<4;i++)
  for (int j=0;j<4;j++)
    sum2 += arr[i][j].get();

```

> 핵심 한 줄: “단일은 delete, 배열은 delete[], 동적은 누수 방지!”
>