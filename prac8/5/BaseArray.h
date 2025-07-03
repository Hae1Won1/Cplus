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

class MyQueue : public BaseArray {
	int index;
public:
	MyQueue(int capacity) : BaseArray(capacity) {
		index = 0;
	}
	void enqueue(int n) { put(index++, n); }
	int capacity() { return getCapacity(); }
	int length() { return index; }
	int dequeue() {
		int tmp = get(0);
		if (index == 0)return -1;
		for (int i = 0; i < index; i++) {
			put(i, get(i+1));
		}
		index--;
		return tmp;
	}
};