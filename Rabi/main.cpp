#include <iostream>
#include "class_Plate.hpp"
#include <vector>
#include <string>

int main() {
	system("chcp 1251");
	std::vector<Plate> vec;
	vec.emplace_back(100, 40, 23, 54, "бетон", "урод", 1000);
	vec.emplace_back(18, 32, 87, 84, "керамика", "я", 1500);
	vec.emplace_back(42, 42, 42, 42, "42", "5opka", 42);
	int cho;

	 do{
		system("cls");
		for (int i = 0; i < vec.size(); i++) {
			std::cout << i << '\n';
			vec.at(i).platePrint();
			std::cout << '\n';
		}

		std::cout << "\n1. Добавить плитку\n2. Убрать плитку\n3. Выход\n";
		std::cin >> cho;
		if (cho == 1) {
			vec.emplace_back().plateEdit();
		}
		if (cho == 2) {
			int delete_element;
			std::cout << "Индекс: ";
			std::cin >> delete_element;
			vec.erase(vec.begin()+delete_element);
		}
	 } while (cho != 3);

}