#include <iostream>

int main() {
	char word[30];
	std::cin >> word;
	for (int i = 0; i < strlen(word)-1; i++)
		std::cout << word[i] << '\n';
	for (int i = strlen(word)-1; i >= 0; i--)
		std::cout << word[i] << ' ';
}