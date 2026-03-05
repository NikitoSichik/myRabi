#include <iostream>

int main() {
	system("chcp 1251 > nul");
	char name[30], password[30], password_repit[30], login[30], password_login[30];

	std::cout << "Имя: ";
	std::cin >> name;
	std::cout << "Пароль: ";
	std::cin >> password;
	std::cout << "Повторите пароль: ";
	std::cin >> password_repit;
	while(strcmp(password, password_repit) != 0){
	std::cout << "Повторите пароль: ";
	std::cin >> password_repit;
	}
	std::cout << "Вы зарегались\n";

	std::cout << "------------------------------------------------------\n";
	std::cout << "Введите логин: ";
	std::cin >> login;
	std::cout << "Введите пароль: ";
	std::cin >> password_login;
	std::cout << "------------------------------------------------------\n";

	while (strcmp(name, login) != 0 or strcmp(password, password_login) != 0) {
		system("cls");
		std::cout << "------------------------------------------------------\n";
		std::cout << "Введите логин: ";
		std::cin >> login;
		std::cout << "Введите пароль: ";
		std::cin >> password_login;
		std::cout << "------------------------------------------------------\n";
	}
	std::cout << "Вы вошли\n";



}