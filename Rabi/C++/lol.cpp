#include <iostream>
#include <fstream>
#include <string>

int myEl(int num1, int num2) {
	if (num2 == 0) return num1;
	myEl(num2, num1 % num2);
}

int main() {
	int a, b, cho;
	std::string name;
	std::cin >> a >> b;

	std::cout << "\nvivod\n1. file\n2. screen\n";
	std::cin >> cho;
	if (cho == 2)
		std::cout << myEl(a, b);
	if (cho == 1) {
		std::cout << "name file";
		std::cin >> name;
		std::ofstream file(name);
		file << myEl(a, b);
		std::cout << name.back();
	}
}