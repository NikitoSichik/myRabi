#include <iostream>
#include <string>

int main() {
	system("chcp 1251");
	std::string str, kiril, lat;
	std::getline(std::cin, str);
	std::cout << str.size();

	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) >= 'À' and str.at(i) <= 'ÿ' or str.at(i) == '¸' or str.at(i) == '¨') kiril.push_back(str.at(i));
		if (str.at(i) >= 'A' and str.at(i) <= 'Z' or str.at(i) >= 'a' and str.at(i) <= 'z') lat.push_back(str.at(i));

	}
	std::cout << kiril << '\n';
	std::cout << lat << '\n';

	float num1 = kiril.size();
	float num2 = lat.size();
	float num3 = str.size();

	std::cout << num1 / num3 * 100 << '\n';
	std::cout << num2 / num3 * 100 << '\n';

}