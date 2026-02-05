#include <iostream>
#include <fstream>
#include <string>

int main() {
	system("chcp 1251");
	const int size = 10;
	double nums[size], sred, sum = 0;
	std::string text;
	std::ifstream file("task 13_8 student.txt");
	std::getline(file, text, '\n');
	std::cout << text;
	for (int i = 0; i < size; i++) {
		file >> nums[i];
		sum += nums[i];
	}
	sred = sum / size;
	std::cout << '\n' << sred;
	
}