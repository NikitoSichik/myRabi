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
	Planet(){
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
	Planet(std::string name, double massa, std::string sostav, int davlenie, int sputniki) {
		name_ = name;
		massa_ = massa;
		sostav_= sostav;
		davlenie_ = davlenie;
		sputniki_ = sputniki;
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
	std::vector<Planet> systemSosa (amount);
	systemSosa.emplace_back("Зумер", 5, "Зепупик", 6, 3);
	systemSosa.emplace_back("Кизил", 8, "Лодки и свага", 2, 9);
	systemSosa.emplace_back("Армавир", 2, "Голод и страдания", 2, -5);
	systemSosa.emplace_back("42-братуханкс", 42, "Психи и клоуны", 42, 42);
	for (int i = 0; i < systemSosa.size(); i++) {
		systemSosa.at(i).PlanetOutput();
	}
}
