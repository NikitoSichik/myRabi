#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::string text;
	std::getline(std::cin, text);
	std::ofstream file("task13_2.txt");
	file << text;
	file.close();
}