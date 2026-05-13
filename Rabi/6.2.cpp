#include <iostream>
#include <vector>
#include <string>

class Company {
	std::string name_;
	int dohod_;
	int rashod_;
	int oborot_;
	int clear_pribily_;
	std::string type_;

public:
	Company& setName(std::string name) {
		if (!name.empty()) name_ = name;
		return *this;
	}

	Company& setDohod(int dohod) {
		if (dohod >= 0) {
			dohod_ = dohod;
			oborot_ = dohod_ + rashod_;
			clear_pribily_ = dohod_ - rashod_;
		}
		return *this;
	}

	Company& setRashod(int rashod) {
		if (rashod >= 0) {
			rashod_ = rashod;
			oborot_ = dohod_ + rashod_;
			clear_pribily_ = dohod_ - rashod_;
		}
		return *this;
	}

	int getOborot() {
		if (type_ == "гос") throw std::exception("это гос. компания");
		if (type_ == "час" && oborot_ < 5000000) return oborot_;
		return oborot_;
	}

	int getClearPribily() {
		if (type_ == "гос") throw std::exception("это гос. компания");
		if (type_ == "час" && oborot_ < 5000000) throw std::exception("час. меньше 5000000");
		return clear_pribily_;
	}

	Company(std::string name, int dohod, int rashod, std::string type) {
		name_ = name;
		dohod_ = dohod;
		rashod_ = rashod;
		type_ = type;
		oborot_ = dohod_ + rashod_;
		clear_pribily_ = dohod_ - rashod_;
	}

	void Print() {
		std::cout << "\nИмя: " << name_ << "\nтип: " << type_ << "\n";
		try {
			std::cout << "Оборот: " << getOborot() << "\n";
			std::cout << "Чистая прибыль: " << getClearPribily() << "\n";
			std::cout << "Доход: " << dohod_ << "\nРасход: " << rashod_ << "\n";
		}
		catch (std::exception& e) {
			std::cout << "Ошибка доступа: " << e.what() << "\n";
		}
	}

	void Edit() {
		std::cout << "Имя: "; std::cin >> name_;
		std::cout << "Доход: "; std::cin >> dohod_;
		std::cout << "Расход: "; std::cin >> rashod_;
		oborot_ = dohod_ + rashod_;
		clear_pribily_ = dohod_ - rashod_;
	}
};

int main() {
	system("chcp 1251");
	std::vector<Company> vec;
	vec.push_back(Company("Били", 6000000, 1000000, "час"));
	vec.push_back(Company("Джин", 1000000, 500000, "гос"));

	int cho;
	do {
		std::cout << "\n1. Вывести\n2. Редактировать\n3. Добавить\n4. Удалить\n5. Выход\n";
		std::cin >> cho;
		switch (cho) {
		case 1:
			for (int i = 0; i < vec.size(); i++)
				vec.at(i).Print();
			break;
		case 2:
		{
			int cho_index = 0;
			std::cout << "выбор индекса: ";
			std::cin >> cho_index;
			if (cho_index < vec.size()) vec.at(cho_index).Edit();
			break;
		}
		case 3:
		{
			std::string n, t; int d, r;
			std::cout << "Имя: "; std::cin >> n;
			std::cout << "Доход: "; std::cin >> d;
			std::cout << "Расход: "; std::cin >> r;
			std::cout << "Тип (гос/час): "; std::cin >> t;
			vec.push_back(Company(n, d, r, t));
			break;
		}
		case 4:
		{
			int cho_index_del = 0;
			std::cout << "выбор индекса: ";
			std::cin >> cho_index_del;
			if (cho_index_del < vec.size()) vec.erase(vec.begin() + cho_index_del);
			break;
		}
		}
	} while (cho != 5);
}