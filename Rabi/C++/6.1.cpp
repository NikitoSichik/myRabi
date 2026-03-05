#include <iostream>
int main() {
	int arr[3] = { 1,2,3 };
	std::cout << arr[0] << arr[1] << arr[2] << '\n' << arr[2] << arr[1] << arr[0] << '\n' << arr[-1] << '\n' << arr[4];
}