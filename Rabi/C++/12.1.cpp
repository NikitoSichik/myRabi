#include <iostream>

int main() {
	system("chcp 1251");
	char name[30], sure_name[30];

	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Введите фамилию: ";
	std::cin >> sure_name;
	std::cout << "Приветствую, " << sure_name << ' ' << name;
}