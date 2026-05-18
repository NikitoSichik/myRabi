#include <iostream>

class MyArray {
	int size_;
	int* arr_ = new int[size_];
public:
	MyArray() : arr_(nullptr), size_(0) {}
	MyArray(int size) : size_(size), arr_(new int[size]) { for (int i = 0; i < size; i++) arr_[i] = 0; }
	int& operator[](int index) { return arr_[index]; }
	int& operator++() { size_++; arr_[size_ - 1] = 0; }
	int& operator--() { size_--; }
	int& operator-() const {
		MyArray copy(size_);
		for (int i = 0; i < size_; i++)
			copy.arr_[i] = -copy.arr_[i];
	}
	operator int() const {
		return size_;
	}
};

int main() {
	
}