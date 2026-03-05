#include <iostream>
#include <fstream>

int main() {
	system("chcp 1251");
	srand(static_cast<double>(time(0)));

	int size1, size2;

	std::cout << "Количество строк:";
	std::cin >> size1;
	std::cout << "Количество эл. в строках:";
	std::cin >> size2;

	double** arr_2 = new double*[size1];

	for (int i = 0; i < size1; i++) {
		arr_2[i] = new double[size2];
		for (int j = 0; j < size2; j++)
			arr_2[i][j] = rand() % 101 / 10.0;
	}


		
	std::ofstream file("matrix.txt", std::ios::trunc);
	file << "Матрица: " << '\n';
	for (int i = 0; i < size1; i++) {
		file << '\n';
		for (int j = 0; j < size2; j++)
			file << arr_2[i][j] << ' ';
	}

	double max = arr_2[0][0], min = arr_2[0][0], sum = 0, sred;
	
	for (int i = 0; i < size1; i++)
		for (int j = 0; j < size2; j++) {
			if (max < arr_2[i][j]) max = arr_2[i][j];
			if (min > arr_2[i][j]) min = arr_2[i][j];
			sum += arr_2[i][j];
		}
	sred = sum / (size1 * size2);

	file << "\nmax: " << max << "\nmin: " << min << "\nsum: " << sum << "\nsred: " << sred;
}