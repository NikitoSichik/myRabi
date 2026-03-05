#include <iostream>

int main() {
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		std::cout << '\n';
		for (int t = 0; t < 3; t++) {
			arr[i][t] = rand() % 10;
			std::cout << arr[i][t] << ' ';

		}
	}
}