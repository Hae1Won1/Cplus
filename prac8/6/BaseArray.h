#pragma once
class BaseArray {
private:
	int capacity; // 배열의 크기
	int* mem; // 점수 배열을 만들기 위한 메모리의 포인터
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack : public BaseArray {
	int index;
public:
	MyStack(int capacity) : BaseArray(capacity) {
		index = 0;
	}
	void push(int n) { put(index++, n); }
	int capacity() { return getCapacity(); }
	int length() { return index; }
	int pop() {
		int tmp = get(index-1);
		index--;
		return tmp;
	}
};

