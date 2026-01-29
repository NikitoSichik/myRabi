#include <iostream>
#include <fstream>
#include <string>

int main() {
	system("chcp 1251");
	std::string text, name_file;
	int cho, key = 3;
	std::cin >> name_file;
	std::fstream file(name_file);
	std::getline(file, text, '\0');
	file.close();
	std::cout << text << '\n' << "1. Øטפנמגאעü\n2. הורטפנמגאעü";
	std::cin >> cho;
	switch (cho) {
	case 1:
		for (int i = 0; i < text.size();i++)
			text.at(i) += key;
		file.open(name_file);
		file << text;
		file.close();
		break;
	case 2:
		for (int i = 0; i < text.size(); i++)
			text.at(i) -= key;
		file.open(name_file);
		file << text;
		file.close();
		break;
	}
}