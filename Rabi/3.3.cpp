#include <iostream>
#include <vector>
#include <string>

class Planet {
	std::string name_;
	double massa_;
	std::string sostav_;
	int davlenie_;
	int sputniki_;
public:
	Planet() {
		std::cout << "Название: ";
		std::cin >> name_;
		std::cout << "Масса: ";
		std::cin >> massa_;
		std::cin.ignore(1);
		std::cout << "Состав: ";
		std::getline(std::cin, sostav_);
		std::cout << "Давление: ";
		std::cin >> davlenie_;
		std::cout << "Количество спутников: ";
		std::cin >> sputniki_;
	}

	void PlanetOutput() {
		std::cout << name_ << ":\nМасса: " <<
			massa_ << "\nСостав атмосферы: " << 
			sostav_ << "\nДавление: " << 
			davlenie_ << "\nКоличество спутников: " <<
			sputniki_ << "\n\n";
	}
};

int main() {
	system("chcp 1251");
	int amount;
	std::cout << "Количество планет в системе: ";
	std::cin >> amount;
	std::vector<Planet> vec(amount);
	for (int i = 0; i < amount; i++) {
		vec.at(i).PlanetOutput();
	}
}
