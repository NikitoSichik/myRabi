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
	Planet& setName(std::string name) {
		if (name != "") name_ = name;
		return *this;
	}

	Planet& setMassa(double massa) {
		if (massa > 0) massa_ = massa;
		return *this;
	}

	Planet& setSostav(std::string sostav) {
		if (sostav != "") sostav_ = sostav;
		return *this;
	}

	Planet& setDavlenie(int davlenie) {
		if (davlenie > 0) davlenie_ = davlenie;
		return *this;
	}

	Planet& setSputniki(int sputniki) {
		if (sputniki > 0) sputniki_ = sputniki;
		return *this;
	}

	std::string getName() const { return name_; }
	double getMassa() const { return massa_; }
	std::string getSostav() const { return sostav_; }
	int getDavlenie() const { return davlenie_; }
	int getSputniki() const { return sputniki_; }

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
	Planet(std::string name, double massa, std::string sostav, int davlenie, int sputniki) {
		name_ = name;
		massa_ = massa;
		sostav_ = sostav;
		davlenie_ = davlenie;
		sputniki_ = sputniki;
	}

	void planetOutput() {
		std::cout << name_ << ":\nМасса: " <<
			massa_ << "\nСостав атмосферы: " <<
			sostav_ << "\nДавление: " <<
			davlenie_ << "\nКоличество спутников: " <<
			sputniki_ << "\n\n";
	}
};

int main() {
	system("chcp 1251");
	int cho_sort;
	int amount;
	std::cout << "Количество планет в системе: ";
	std::cin >> amount;
	std::vector<Planet> system_sosa(amount);
	system_sosa.emplace_back("Зумер", 5, "Зепупик", 6, 3);
	system_sosa.emplace_back("Кизил", 8, "Лодки и свага", 2, 9);
	system_sosa.emplace_back("Армавир", 2, "Голод и страдания", 2, -5);
	system_sosa.emplace_back("42-братуханкс", 42, "Психи и клоуны", 42, 42);
	for (int i = 0; i < system_sosa.size(); i++) {
		system_sosa.at(i).planetOutput();
	}

	std::cout << "1 - название\n2 - масса\n3 - состав\n4 - давление \n5 - спутник\n";
	std::cout << "по какому полю сортировать: ";
	std::cin >> cho_sort;

	//for (int i = 0; i < systemSosa.size(); i++)
	//	for (int j = 0; j < systemSosa.size() - 1; j++)
	//		if (systemSosa.at(j) > systemSosa.at(j + 1))
	//			std::swap(systemSosa.at(j), systemSosa.at(j + 1));


	for (int i = 0; i < system_sosa.size(); i++)
		for (int j = 0; j < system_sosa.size() - 1 - i; j++) {

			if (cho_sort == 1 && (system_sosa.at(j).getName() > system_sosa.at(j + 1).getName()))
				std::swap(system_sosa.at(j), system_sosa.at(j+1));
			if (cho_sort == 2 && (system_sosa.at(j).getMassa() > system_sosa.at(j + 1).getMassa()))
				std::swap(system_sosa.at(j), system_sosa.at(j + 1));
			if (cho_sort == 3 && (system_sosa.at(j).getSostav() > system_sosa.at(j + 1).getSostav()))
				std::swap(system_sosa.at(j), system_sosa.at(j + 1));
			if (cho_sort == 4 && (system_sosa.at(j).getDavlenie() > system_sosa.at(j + 1).getDavlenie()))
				std::swap(system_sosa.at(j), system_sosa.at(j + 1));
			if (cho_sort == 5 && (system_sosa.at(j).getSputniki() > system_sosa.at(j + 1).getSputniki()))
				std::swap(system_sosa.at(j), system_sosa.at(j + 1));
		}

	// вывод
	for (int i = 0; i < system_sosa.size(); i++) {
		system_sosa.at(i).planetOutput();
	}
}
