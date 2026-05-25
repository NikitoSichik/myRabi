#include <iostream>
#include <vector>

class Test {
	int num_;
public:
	Test() : num_(0) {
		std::cout << "Конструктор по умолчанию " << this << '\n';
	}
	Test(int num): num_(num) {
		std::cout << "Конст. с пар. " << this << '\n';
	}
	Test(const Test& obj) {
		std::cout << "Сработал Конструктор копирования из " << &obj << " в " << this << ' ' << obj.num_ << '\n';
		num_ = obj.num_;
	}

	void copy(Test obj) {
		std::cout << "функция сработала\n";
	}

	//void Print() {}
};
int main() {
	system("chcp 1251");
	Test obj1;
	Test obj2;
	Test obj()
}