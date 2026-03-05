#include <iostream>

int myFu(char check, char words[]) {
	for (int i = 0; i < strlen(words); i++) {
		if (check == words[i])
			return i;
		else
		{
			return -1;
		}
	}
}

int main() {
	system("chcp 1251 > nil");
	char words[30];
	std::cin >> words;

	std::cout << "Буква: ";
	char check;
	std::cin >> check;
	if (myFu(check, words) >= 0)
		std::cout << check << " - " << myFu(check, words) << '\n';
	else
		std::cout << "Нету";
	
	// это все выходы

	for (int i = 0; i < strlen(words); i++) {
		if (check == words[i]) {
			std::cout << check << " - " << i << '\n';
		}
	}
}