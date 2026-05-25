#include <iostream>
#include <string>
#include <vector>

class Student {
	std::string name_;
	std::string floor_;
	int age_;
	int class_obu_;
	int id_ = 0;
	static int amount_of_students_;
	//Я Никита и я люблю думать
public:
	int getId() const {
		if (id_ > 0) return id_;
		else return -1;
	}

	Student(std::string name, std::string floor, int age, int class_obu){
		name = name_;
		floor = floor_;
		age = age_;
		class_obu = class_obu_;
		amount_of_students_++;
		id_++;
	}

	std::string getName() const {
		if (name_.empty()) return name_;
		else return 0;
	}

	std::string getfloor() const {
		if (floor_.empty()) return floor_;
		else return 0;
	}

	int getAge() const {
		if (age_ > 0) return age_;
		else return 0;
	}

	int getClassObu() const {
		if (class_obu_ > 0) return class_obu_;
		else return 0;
	}
	
	void Print() {
		std::cout << "id: " << id_;
		std::cout << "name: " << name_;
		std::cout << "floor: " << floor_;
		std::cout << "age: " << age_;
		std::cout << "class_obu: " << class_obu_;
	}

	void Edit() {
		std::cout << "name: ";
		std::cin >> name_;
		std::cout << "floor: ";
		std::cin >> floor_;
		std::cout << "age: ";
		std::cin >> age_;
		std::cout << "class_obu: ";
		std::cin >> class_obu_;
	}
};

int Student::amount_of_students_ = 0;
int main() {
	system("chcp 1251");
	std::vector<Student>vec;
	vec.emplace_back("Тимур", "Муж.", 17, 3);
	std::string name, floor;
	int id;
	int cho;

	do {
		std::cout << "\n1. добавление\n2. удаление\n3. редактирорвание\n4. вывод\n5. выход\n";
		std::cin >> cho;
		switch (cho) {
		case 1:
			int class_obu, age;
			std::cout << "name: ";
			std::cin >> name;
			std::cout << "floor: ";
			std::cin >> floor;
			std::cout << "age: ";
			std::cin >> age;
			std::cout << "class_obu: ";
			std::cin >> class_obu;
			vec.emplace_back(name, floor, age, class_obu);
			break;
		case 2:
			int id;
			std::cout << "\nid: ";
			std::cin >> id;
			vec.erase(vec.begin() + id);
			break;
		case 3:
			std::cout << "\nid: ";
			std::cin >> id;
			vec.at(id).Edit();
			break;
		case 4:
			int cho_sort;
			std::cout << "\nвыбор по чему сортировать";
			std::cin >> cho_sort;
			for (int i = 0; i < vec.size(); i++)
				for (int j = 0; j < vec.size() - 1 - i; j++) {
					if (cho_sort == 1 && (vec.at(j).getName() > vec.at(j + 1).getName()))
						std::swap(vec.at(j), vec.at(j + 1));
					if (cho_sort == 2 && (vec.at(j).getfloor() > vec.at(j + 1).getfloor()))
						std::swap(vec.at(j), vec.at(j + 1));
					if (cho_sort == 3 && (vec.at(j).getAge() > vec.at(j + 1).getAge()))
						std::swap(vec.at(j), vec.at(j + 1));
					if (cho_sort == 4 && (vec.at(j).getClassObu() > vec.at(j + 1).getClassObu()))
						std::swap(vec.at(j), vec.at(j + 1));
					if (cho_sort == 5 && (vec.at(j).getId() > vec.at(j + 1).getId()))
						std::swap(vec.at(j), vec.at(j + 1));
				}
			for (int i = 0; i < vec.size(); i++)
				vec.at(i).Print();
			break;
		}
	} while (cho != 5);
}