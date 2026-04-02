#include <iostream>
#include <string>
#include <vector>
#include "class_bed.hpp"

int main() {
	system("chcp 1251");
	int amount;
	char cho;
	std::cout << "Количество кроватей >_:";
	std::cin >> amount;
	std::vector<Bed> beds(amount);
	std::cout << "Заполните сами? y/n >_:";
	std::cin >> cho;
	if (cho == 'n') {
		for (int i = 0; i < beds.size(); i++)
			beds.at(i).BedPrint();
	}
	else
	{
		for (int i = 0; i < beds.size(); i++) {
			beds.at(i).BedEdit();
			beds.at(i).BedPrint();
		}
	}

}