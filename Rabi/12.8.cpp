#include <iostream>
#include <string>

int main() {
	system("chcp 1251 > nil");
	std::string str;
	std::getline(std::cin, str);
	str.erase(str.begin());
	std::cout << str << '\n';

	str.erase(0, 5);
	std::cout << str << '\n';

	int num, start, stop;
	std::cout << "Ёлемент дл€ удалени€: ";
	std::cin >> num;
	str.erase(str.begin()+num);
	std::cout << str << '\n';

	std::cout << "удалени€ Ёлемента от: ";
	std::cin >> start;
	std::cout << "удалени€ Ёлемента до: ";
	std::cin >> stop;
	str.erase(start, stop);
	std::cout << str << '\n';
}