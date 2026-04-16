#include <iostream>
#include <vector>
#include <string>

class Worker {
	int id_;
	std::string name_;
	std::string gender_;
	int age_;
	std::string post_;
	std::string department_;
public:
	void workerPrint() {
		std::cout << "ID: " << id_ << '\t';
		std::cout << "ФИО: " << name_ << '\t';
		std::cout << "Пол: " << gender_ << '\t';
		std::cout << "Возраст: " << age_ << '\t';
		std::cout << "Должность: " << post_ << '\t';
		std::cout << "Отдел: " << department_ << '\t';
	}
	Worker(int id) : name_{ "void" }, gender_{ "void" }, age_{ 0 }, post_{ "void" }, department_{ "void" } { id_ = id; }
	Worker(int id, std::string name) :Worker(id) {name_ = name; }
	Worker(int id, std::string name, std::string gender) :Worker(id, name) {gender_ = gender; }
	Worker(int id, std::string name, std::string gender, int age) :Worker(id, name, gender) {age_ = age; }
	Worker(int id, std::string name, std::string gender, int age, std::string post) :Worker(id, name, gender, age) {post_ = post; }
	Worker(int id, std::string name, std::string gender, int age, std::string post, std::string department) :Worker(id, name, gender, age, post) {department_ = department; }

	void workerEdit() {
		std::cin.ignore(1024, '\n');
		std::cout << "ФИО: ";
		std::getline(std::cin, name_);
		std::cout << "Пол: ";
		std::cin >> gender_;
		std::cout << "Возраст: ";
		std::cin >> age_;
		std::cout << "Должность: ";
		std::cin >> post_;
		std::cout << "Отдел: ";
		std::cin >> department_;
	}
};

int main() {
	system("chcp 1251");
	int cho;
	std::vector<Worker> vec{ {0}, {1}, {2}, {3} };

	do {
		std::cout << "1. Вывести на экран\n2. Редактировать рабочего\n3. Добавить рабочего\n4. Удалить рабочего\n5. выход\n";
		std::cin >> cho;
		switch (cho) {
		case 1:
			for (int i = 0; i < vec.size(); i++) {
				std::cout << " Индекс " << i << ' ';
				vec.at(i).workerPrint();
				
				std::cout << '\n';
			}
			break;
		case 2:
			int index1;
			std::cout << "индекс рабочего";
			std::cin >> index1;
			vec.at(index1).workerEdit();
			break;
		case 3:
			vec.emplace_back(vec.size()+1).workerEdit();
			break;
		case 4:
			int index;
			std::cout << "индекс рабочего";
			std::cin >> index;
			vec.erase(vec.begin() + index);
			break;
		}
	} while (cho != 5);
}