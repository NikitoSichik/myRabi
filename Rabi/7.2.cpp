#include <iostream>
#include <vector>

class Test {
	int* ptr_, size_;

public:
	Test(int size) : ptr_(new int[size]), size_(size){
		std::cout << "конструктор сработал\n";
	}

	Test(const Test& obj): size_(obj.size_) {
		ptr_ = new int[size_];
		std::cout << "конструктор копирования. новый адрес: " << ptr_ << "\n";
	}

	~Test()  {
		delete[] ptr_;
		ptr_ = nullptr;
		std::cout << "деструктор сработал\n";
	}

	void printInfo() {
		std::cout << "адрес масива: " << ptr_ << '\n';
	}
};

void myFu(Test obj) {
	std::cout << "сработала функция\n";
	obj.printInfo();
}

int main() {
	system("chcp 1251");
	Test obj1(2);
	obj1.printInfo();
	myFu(obj1);
}