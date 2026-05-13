#include <iostream>
#include <vector>

class Test {
	int num_;
public:
	Test() : num_(0) {
		std::cout << "Конструктор по умолчанию" << this << ' ' << num_ << '\n';
	}
	Test(int num): num_(num) {
		std::cout << "Конструктор с параметром " << this << ' ' << num_ << '\n';
	}
	Test(const Test& obj) {
		std::cout << "Сработал конструктор копирования из " << &obj << " в " << this << ' ' << obj.num_ << '\n';
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
	std::vector<Test> vec(3);
	std::cout << "\nудалил эл.\n";
	vec.erase(vec.begin());
	std::cout << "\nдобавил эл. push_back\n";
	vec.push_back(4);
	std::cout << "\nудалил эл.\n";
	vec.erase(vec.begin());
	std::cout << "\nдобавил эл. emplace_back\n";
	vec.emplace_back(5);
	std::cout << "\nдобавил эл. emplace_back\n";
	vec.emplace_back(6);
	std::cout << "\nдобавил эл. emplace_back\n";
	vec.emplace_back(7);
}