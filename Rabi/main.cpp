#include <iostream>
#include "class_Plate.hpp"
#include <vector>
#include <string>

int main() {
	std::vector<Plate> vec;
	vec.emplace_back(100, 40, 23, 54, "бетон", "урод", 1000);
	vec.emplace_back(18, 32, 87, 84, "керамика", "я", 1500);
	vec.emplace_back(42, 42, 42, 42, "42", "5opka", 42);

	int cho;
	std::cout << "\n1. Добавить плитку\n2. Убрать плитку\n";

	
}