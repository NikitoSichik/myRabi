#include <iostream>
#include <vector>
#include <string>

class Company {
	std::string name_;
	int dohod_;
	int rashod_;
	int oborot_ = dohod_ + rashod_;
	int clear_pribily_ = dohod_ - rashod_;
	std::string type_;

public:
	Company& setName(std::string name) {
		if (!name.empty()) name_ = name;
		return *this;
	}

	Company& setDohod(int dohod) {
		if (dohod > 0) { oborot_ = dohod_ + rashod_; clear_pribily_ = dohod_ - rashod_;  dohod_ = dohod; }
		return *this;
	}

	Company& setRashod(int rashod) {
		if (rashod > 0) { oborot_ = dohod_ + rashod_; clear_pribily_ = dohod_ - rashod_; rashod_ = rashod; }
		return *this;
	}

	int getOborot () {
		if (dohod_ >= 0 && rashod_ >= 0) {
			if (type_ == "гос") throw std::exception("это гос. компания");
			else if (type_ == "час" && oborot_ < 5000000) return oborot_;
			else if (type_ == "час") return oborot_;
			oborot_ = dohod_ + rashod_;
			return oborot_;
		}
		else throw std::exception("расход или доход мельше 0");
	}

	int getClearPribily() {
		if (dohod_ >= 0 && rashod_ >= 0) {
			if (type_ == "гос") throw std::exception("это гос. компания");
			else if (type_ == "час" && oborot_ < 5000000) throw std::exception("час. меньше 5000000");
			else if (type_ == "час") return clear_pribily_;
			clear_pribily_ = dohod_ - rashod_;
			return clear_pribily_;
		}
		else throw std::exception("расход или доход мельше 0");
	}
	
	Company(std::string name, int dohod, int rashod, int oborot, int clear_pribily, std::string type) {
		name = name_;
		dohod = dohod_;
		rashod = rashod_;
		oborot = oborot_;
		clear_pribily = clear_pribily_;
		type = type_;
	}

	void Print() {
		std::cout <<
			"Имя: " << name_ <<
			"Доход: " << dohod_ <<
			"Расход: " << rashod_ <<
			"Оборот: " << dohod_ <<
			"Чистая прибыль: " << clear_pribily_ <<
			"тип: " << type_;
	}

	void Edit() {

	}
};

int main() {
	std::vector<Company> vec{  };
	int cho, cho2;
	do {
		std::cout << "\n1. Ввывести\n2. Редактировать\n3. Добавить\n4. Удалить\n";
		std::cin >> cho;
		switch (cho) {
		case 1:
			for (int i = 0; i < vec.size(); i++)
				vec.at(i).Print();
			break;
		case 2:
			std::
			break;
		case 3:
			break;
		case 4:
			break;
		}

	} while (cho < 4 || cho > 1);
}