#include <iostream>

int main() {
	system("chcp 1251 > nul");
	char from[30], name[30];
	int day, month, god;

	std::cout << "Имя: ";
	std::cin >> name;
	std::cout << "Денеь рождения: ";
	std::cin >> day;
	std::cout << "Месяц рождения: ";
	std::cin >> month;
	std::cout << "Год рождения: ";
	std::cin >> god;
	std::cout << "Откуда ты: ";
	std::cin >> from;

	std::cout << "Hello " << name << " from " << from << ' ' << day << '.' << month << '.' << god << " dob. Your age is " << (god - 2026)*-1;
}