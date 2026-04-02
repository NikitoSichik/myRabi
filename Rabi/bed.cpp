#include <iostream>
#include <string>
#include "class_bed.hpp"


Bed::Bed() {
	two_tiered_ = false;
	number_of_seats_ = 1;
	material_ = "Дерево";
	money_ = 2999;
}

void Bed::BedEdit() {
	char choo;
	std::cout << "двуярусная y/n";
	std::cin >> choo;
	two_tiered_ = (choo == 'y') ? true : false;
	std::cout << "Материал";
	std::cin >> material_;
	std::cout << "Сколько человек";
	std::cin >> number_of_seats_;
	std::cout << "Стоимость";
	std::cin >> money_;
}

void Bed::BedPrint() {
	std::cout << '\n' << "двуярусная ->" << two_tiered_ << '\n';
	std::cout << "Материал ->" << material_ << '\n';
	std::cout << "Сколько человек ->" << number_of_seats_ << '\n';
	std::cout << "Стоимость ->" << money_ << '\n';
}