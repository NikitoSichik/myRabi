#include <iostream>

const int size = 999;

void myFu(char word[], bool chek) {
	for (int i = 0; i < size; i++)
		if (word[i] == '\0' and chek == false) {
			std::cout << i;
			chek = true;
		}
}

int main() {
	bool chek = false;
	char word[size];

	std::cin >> word;
	myFu(word, chek);
}