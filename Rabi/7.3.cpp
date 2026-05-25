#include <iostream>
#include <vector>

class DynamicClass {
	int* size_ = new int;
	int* arr_ = new int[*size_];

public:
	DynamicClass() : size_(nullptr), arr_(nullptr) { 
		std::cout << "конструктор по умолчанию\n";
	}

	DynamicClass(int size, std::vector<int>vec) {
		*size_ = size;
		arr_ = new int[size];
		for (int i = 0; i < *size_; i++)
			arr_[i] = vec.at(i);
		std::cout << "конструктор с параметром\n";
	}

	~DynamicClass() {
		delete[] arr_;
		delete size_;
		std::cout << "деструктор\n";
	}
	
	DynamicClass(DynamicClass&& src) noexcept {
		size_ = src.size_;
		arr_ = src.arr_;
		src.size_ = nullptr;
		src.arr_ = nullptr;
	}
};

int main() {
	system("chcp 1251");
	std::vector<DynamicClass>vec(2);
	vec.push_back(DynamicClass(3, {7,8,9}));
}