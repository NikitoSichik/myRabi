#include <iostream>
void createArray(int size, int*& arr) {
	if (arr == nullptr) {
		arr = new int[size];
		for (int i = 0; i < size; i++) arr[i] = i;
	}
}
void printArray(int size, int* arr) {
	for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
}
int* copyArray(int size, int copy_size, int*& arr, int*& copy_arr) {
	copy_arr = new int[copy_size];
	if (copy_size < size) {
		for (int i = 0; i < copy_size; i++) copy_arr[i] = arr[i];
	}
	if (copy_size > size) {
		for (int i = 0; i < size; i++) copy_arr[i] = arr[i];
	}
	return copy_arr;
}
void arrPlus(int& size, int*& arr, int nackoko, int*& copy_arr) {
	copy_arr = new int[size];
	for (int i = 0; i < size; i++) copy_arr[i] = arr[i];
	delete[] arr;
	int new_size = size += nackoko;
	arr = new int[new_size];
	for (int i = 0; i < size; i++) arr[i] = copy_arr[i];
}
void arrMinus(int& size, int*& arr, int nackoko, int*& copy_arr) {
	copy_arr = new int[size];
	for (int i = 0; i < size; i++) copy_arr[i] = arr[i];
	delete[] arr;
	int new_size = size -= nackoko;
	arr = new int[new_size];
	for (int i = 0; i < size; i++) arr[i] = copy_arr[i];
}
void deleteArray(int*& arr, int& size) {
	delete arr;
	size = 0;
}
int main() {
	system("chcp 1251");
	srand(static_cast<int>(time(0)));
	int size = 1;
	int copy_size = 1;
	int for_how_long;
	int* arr = nullptr;
	int* copy_arr = nullptr;
	int choice = 1;
	while (size != 0) {
		int choice = 88;
		std::cout << "\nЧто Сделать?\n1.Создать массив\n2.Вывести массив\n3.Создать копию массива\n4.Увеличить размер массива на выбранное значение\n5.Уменьшить размер массива на выбранное значение\n6.Удалить массив\n>_";
		std::cin >> choice;
		switch (choice) {
		case 1: 
			std::cout << "\nВведите размер массива: ";
			std::cin >> size;
			createArray(size, arr);
			break;
		case 2:
			printArray(size, arr);
			break;
		case 3:
			std::cout << "\nВведите размер копии";
			std::cin >> copy_size;
			copyArray(size, copy_size, arr, copy_arr);
			break;
		case 4:
			std::cout << "\nВведите насколько увеличить: ";
			std::cin >> for_how_long;
			arrPlus(size, arr, for_how_long, copy_arr);
			break;
		case 5:
			std::cout << "\nВведите насколько уменьшить: ";
			std::cin >> for_how_long;
			arrMinus(size, arr, for_how_long, copy_arr);
			break;
		case 6:
			deleteArray(arr, size);
			break;
		}
	}
}