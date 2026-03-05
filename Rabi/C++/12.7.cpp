#include <iostream>
#include <string>

int main() {
	system("chcp 1251 > nul");
	std::string name, password, password_repit, login, password_login;

	std::cout << "Имя: ";
	std::cin >> name;
	std::cout << "Пароль: ";
	std::cin >> password;
	std::cout << "Повторите пароль: ";
	std::cin >> password_repit;
	while (password != password_repit) {
		std::cout << "Повторите пароль: ";
		std::cin >> password_repit;
	}
	std::cout << "Вы зарегались\n";

	while (name != login or password != password_login) {
		system("cls");
		std::cout << "Введите логин: ";
		std::cin >> login;
		std::cout << "Введите пароль: ";
		std::cin >> password_login;
	}
	std::cout << "Вы вошли\n";



}