#include <iostream>
#include <fstream>
#include <string>

int main() {
	system("chcp 1251");
	std::string text;
	std::getline(std::cin, text);
	std::ofstream file("13.4.txt");
	file << text;
	file.close();
}