#include <iostream>

class Test {
	int num_;
public:
	Test() : num_(0) {
		std::cout << "Конст. ум. " << this << '\n';
	}
	Test(int num): num_(num) {
		std::cout << "Конст. с пар. " << this << '\n';
	}
	Test(const Test& obj) {
		std::cout << "Сработал конст. коп. из " << &obj << " в " << this << '\n';
		num_ = obj.num_;
	}

	void copy(Test obj) {
		std::cout << "функция сработала\n";
	}

	void Print() {
	}
};
int main() {
	system("chcp 1251");
	Test obj1;
	Test obj2;
	Test obj()
}