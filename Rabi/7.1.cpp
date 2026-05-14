#include <iostream>
#include <vector>

class Test {
	int num_;
public:
	Test() : num_(0) {
		std::cout << "Конструктор по умолчанию " << this << '\n';
	}
	Test(int num): num_(num) {
		std::cout << "Конструктор с параметром " << this << '\n';
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
	Test obj1(4);
	Test obj2;
	Test obj3(obj2);
	std::vector<Test> vec(4);
	vec.erase(vec.begin());
	std::cout << "\n\nСоздание push_back:\n";
	vec.push_back(8);
	vec.erase(vec.begin());
	std::cout << "\n\nСоздаю emplace_back:\n";
	vec.emplace_back(9);
	vec.emplace_back(3);
	vec.emplace_back(6);
	


}