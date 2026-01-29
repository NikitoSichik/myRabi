#include <iostream>
#include <fstream>
#include <string>

int main() {
	system("chcp 1251");
	std::string name_file, text, text_rev;
	std::cin >> name_file;
	std::fstream file(name_file);
	std::getline(file, text, '\0');
	file.close();
	std::cout << text << '\n';

	for (int i = text.size()-1; i >= 0; i--) {
		text_rev.push_back(text.at(i));
	}
	std::ofstream rev_file("reverse.txt");
	rev_file << text_rev;
	rev_file.close();
}