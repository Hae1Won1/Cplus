# 📘 2장 C++ 프로그래밍의 기본

---

## 2-1 C++ 기본 요소와 화면 출력

### ▪ 주석

- `/* ... */` : 여러 줄 주석
- `//` : 한 줄 주석

### ▪ main() 함수

- 프로그램 실행 시작점
- `return 0;`은 생략 가능 → 자동으로 `return 0;` 실행됨

### ▪ `#include <iostream>`

- 전처리기 지시문
- C++ 표준 입출력을 위한 클래스와 객체 선언 포함

### ▪ 화면 출력

- **`cout` 객체**
    - 표준 출력 스트림 (스크린 연결)
    - `std::cout` 처럼 **std 네임스페이스**에 속함
- **`<<` 연산자**
    - 스트림 삽입 연산자
    - 본래는 비트 시프트 연산자이나, `<iostream>`에서 출력용으로 재정의됨
    - 여러 개 연결 가능 (왼쪽 → 오른쪽 순서 실행)
- **개행**
    - `\n`, `std::endl`

✅ Check Time

```cpp
#include <iostream>
int main() {
    std::cout << "정해원" << '\n' << "군포";
}

```

---

## 2-2 `namespace`와 `std::`

### ▪ namespace

- 이름 충돌 방지용 키워드
- 서로 다른 이름 공간(namespace) 안의 같은 이름은 충돌하지 않음
- 선언
    
    ```cpp
    namespace kitae {
        int age;
    }
    
    ```
    
- 사용
    
    ```cpp
    kitae::age;
    
    ```
    

### ▪ std 네임스페이스

- C++ 표준 라이브러리의 모든 이름이 들어 있음
- 예: `std::cout`, `std::cin`

### ▪ using 지시어

- 특정 이름만 가져오기:
    
    ```cpp
    using std::cout;
    
    ```
    
- 전체 네임스페이스 가져오기:
    
    ```cpp
    using namespace std;
    
    ```
    

---

## 2-3 키 입력 받기

### ▪ `cin`과 `>>`

- `cin` : 표준 입력 스트림 객체 (키보드 연결)
- `>>` : 스트림 추출 연산자
    - 입력 스트림에서 값을 꺼내 변수에 저장
    - 본래 비트 시프트 연산자이나 `<iostream>`에서 입력용으로 재정의됨
- `<Enter>` 입력 시 → 버퍼에 있던 값이 변수에 저장됨
- 여러 개 변수 입력 가능 (왼쪽 → 오른쪽 순서)

### ▪ 실행문 중간에 변수 선언

- C++에서는 코드 중간에도 변수 선언 가능
- 장점: 스코프 최소화, 가독성 ↑, 즉시 초기화 가능
- 단점: 변수들이 흩어져 있어서 한눈에 보기 어려움

✅ Check Time

```cpp
#include <iostream>
using namespace std;

int main() {
    int radius;
    cin >> radius;

    double area = 3.14 * radius * radius;
    cout << area;
}

```

---

## 2-4 키보드로 문자열 입력

### ▪ C-스타일 문자열 (C-String)

- `'\0'`(널 문자)로 끝나는 `char[]`
- 크기는 항상 "문자 수 + 1" 이상 필요
- 예:
    
    ```cpp
    char name1[6] = "Grace";   // 문자열
    char name2[5] = {'G','r','a','c','e'}; // 문자열 아님
    
    ```
    
- `<cstring>` 함수 활용 가능 (`strcpy`, `strcmp`, `strlen` 등)

### ▪ cin으로 문자열 입력

- 예:
    
    ```cpp
    char name[6];
    cin >> name; // 공백 전까지만 입력
    
    ```
    
- 한계
    - 배열보다 많은 문자를 입력하면 실행 오류
    - 공백 포함 입력 불가

### ▪ `cin.getline()`

- 공백 포함 문자열 입력 가능
- 원형:
    
    ```cpp
    cin.getline(char buf[], int size, char delimitChar = '\n');
    
    ```
    
- 예:
    
    ```cpp
    char address[100];
    cin.getline(address, 100, '\n');  // Enter 전까지 입력
    
    ```
    

### ▪ 공백 문자

- 종류: `' '`, `'\t'`, `'\n'`, `'\r'`, `'\f'`, `'\v'`
- 판별 함수: `isspace(char c)`

### ▪ string 클래스

- C++ 표준 문자열 클래스
- 크기 제한 없음, 문자열 다루기 쉬움
- `<string>` 헤더 필요
- 예:
    
    ```cpp
    #include <iostream>
    #include <string>
    using namespace std;
    
    int main() {
        string song("Falling in love with you");
        string elvis("Elvis Presley");
        string singer;
    
        cout << song + "를 부른 가수는? ";
        getline(cin, singer);  // 공백 포함 입력 가능
    
        if (singer == elvis) cout << "맞았습니다.";
        else cout << "틀렸습니다. 정답은 " << elvis << "입니다.";
    }
    
    ```
    

✅ Check Time

```cpp
char city[21];
cin.getline(city, 21, '.');

```

---

## 2-5 `#include <iostream>`

### ▪ 전처리기

- `#include` → 지정된 헤더 파일 내용을 그 자리에 삽입 (헤더 파일 확장)

### ▪ 헤더 파일 위치

- `C:\Program Files\Microsoft Visual Studio\...\include`

### ▪ `#include <>` vs `#include ""`

- `< >` : 컴파일러 설치 폴더에서 탐색 (표준 헤더)
- `""` : 프로젝트 폴더에서 탐색 (사용자 정의 헤더)

### ▪ 헤더 파일 내용

- 함수의 **선언(원형)** 만 들어 있음
- 실제 구현은 라이브러리에 컴파일된 상태로 존재
- 컴파일러: 선언을 보고 호출이 맞는지 확인
- 링커: 라이브러리에서 함수 실제 코드와 연결