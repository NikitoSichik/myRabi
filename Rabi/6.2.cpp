#include <iostream>
#include <vector>
#include <string>

class Company {
	std::string name_;
	int income_;
	int expenses_;
	int turnover_ = income_ + expenses_;
	int net_profit_;
	bool state_;
public:
	Company& setName(std::string name) { if (name != "") name_ = name; return *this; }
	Company& setIncome(int income) { if (income > 0) income_ = income; turnover_ = income_ + expenses_; net_profit_ = income_ - expenses_; return *this; }
	Company& setExpenses(int expenses) { if (expenses > 0) expenses_ = expenses; turnover_ = income_ + expenses_; net_profit_ = income_ - expenses_; return *this; }

	std::string getName() const { return name_; }
	int getIncome() const {
		if (state_ == true && turnover_ >= 5000000) throw std::exception("это частная.");
		else if (state_ == false) throw std::exception("это гос.");
		else if (turnover_ < 5000000 && state_ == true) return income_;
	}
	int getExpenses() const {
		if (state_ == true && turnover_ >= 5000000) throw std::exception("это частная.");
		else if (state_ == false) throw std::exception("это гос.");
		else if (turnover_ < 5000000 && state_ == true)  return expenses_;
	}
	int getTurnover() const {
		if (state_ == true && turnover_ >= 5000000) throw std::exception("это частная.");
		else if (state_ == false) return turnover_;
		else if (turnover_ < 5000000 && state_ == true) return turnover_;
	}
	int getNet_profit() const {
		if (state_ == true && turnover_ >= 5000000) throw std::exception("это частная.");
		else if (state_ == false) throw std::exception("это гос.");
		else if (turnover_ < 5000000 && state_ == true)  return net_profit_;
	}
	int getState() const { return state_; }

	Company(std::string name, int income, int expenses, bool state) {
		name_ = name;
		income_ = income;
		expenses_ = expenses;
		state_ = state;
		//if (turnover_ < 5000000) state_ = false; else state_ = true;
	}

	void Print() {
		try { std::cout << "Имя компании: " << getName() << "\n"; }
		catch (std::exception ex) { std::cout << ex.what() << "\n"; }
		try { std::cout << "Тип компании: " << ((getState() == false) ? "государственная\n" : "частная\n"); }
		catch (std::exception ex) { std::cout << ex.what() << "\n"; }
		try { std::cout << "Доход компании: " << getIncome() << "\n"; }
		catch (std::exception ex) { std::cout << ex.what() << "\n"; }
		try { std::cout << "Расход компании: " << getExpenses() << "\n"; }
		catch (std::exception ex) { std::cout << ex.what() << "\n"; }
		try { std::cout << "Оборот компании: " << getTurnover() << "\n"; }
		catch (std::exception ex) { std::cout << ex.what() << "\n"; }
		try { std::cout << "Чистая прибыль: " << getNet_profit() << "\n"; }
		catch (std::exception ex) { std::cout << ex.what() << "\n"; }
	}

	void Edit() {
		std::string name;
		int income, expenses;
		std::cout << "\nВведите имя: ";
		std::cin.ignore(1024, '\n');
		std::getline(std::cin, name);
		setName(name);

		std::cout << "\nВведите доход: ";
		std::cin >> income;
		setIncome(income);

		std::cout << "\nВведите расход: ";
		std::cin >> expenses;
		setIncome(expenses);
	}
};

int main() {
	system("chcp 1251");
	std::vector<Company> companies{ {"миржелтокаяяйцо", 10000000, 100000, true},{"ГАЗНЕФТЬГАЗГАЗ", 100000000, 400, false},{"ООО тмыв денег", 1000000, 1000000, true} };
	std::string name;
	int cho, index, income, expenses;
	bool is_private;
	do {
		std::cout << "\n1.Вывести все компании\n2.Редактировать компанию\n3.Добавить компанию\n4.Удалить компанию\n5.Выход\n>_: ";
		std::cin >> cho;
		if (cho == 1) {
			for (int i = 0; i < companies.size(); i++) {
				std::cout << i << '\n';
				companies.at(i).Print();
			}
		}
		if (cho == 2) {
			std::cout << "\nВведите индекс: ";
			std::cin >> index;
			companies.at(index).Edit();
		}
		if (cho == 3) {
			std::cout << "\nВведите имя: ";
			std::cin.ignore(1024, '\n');
			std::getline(std::cin, name);

			std::cout << "\nВведите частная ли компания(1-да/0-нет): ";
			std::cin >> is_private;

			std::cout << "\nВведите доход: ";
			std::cin >> income;

			std::cout << "\nВведите расход: ";
			std::cin >> expenses;
			companies.emplace_back(name, is_private, income, expenses);
		}
		if (cho == 4) {
			std::cout << "\nВведите индекс: ";
			std::cin >> index;
			companies.erase(companies.begin() + index);
		}
	} while (cho != 5);
}