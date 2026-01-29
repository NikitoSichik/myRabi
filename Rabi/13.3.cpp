#include <iostream>
#include <fstream>
#include <string>

int main() {
	system("chcp 1251");
	std::string text; 
	std::getline(std::cin, text);
	std::ofstream ou_file("13.3.txt");
	ou_file << text;
	ou_file.close();
	std::ifstream in_file("13.3.txt");
	std::getline(in_file, text);
	in_file.close();
	std::cout << text;


}