#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::string text;
	std::ifstream file("task13_1.txt");
	file >> text;
	file.close();
	std::cout << text;
}