#include <iostream>
#include <vector>
class Student {
	std::string name_, class_obuchenia_;
	int age_, id_;
public:

	void editStudent() {
		std::cin >> name_ >> age_ >> id_ >> class_obuchenia_;
	}

	void outputStudent(int count) {
		std::cout << "number: " << count << '\n';
		std::cout << "name: " << name_ << '\n';
		std::cout << "age: " << age_ << '\n';
		std::cout << "id: " << id_<< '\n';
		std::cout << "class_obuchenia: " << class_obuchenia_ << "\n\n";
	}
	Student() {
		std::cout << "Студент создан\n";
		name_ = "unknown";
		age_ = 0;
		id_ = -1;
		class_obuchenia_ = "null";
	}
	~Student() {
		std::cout << "Сдуент " << name_ << ' ' << id_ << " Сдох \n";
	}
};

int main() {
	system("chcp 1251");
	int count;
	std::cin >> count;
	
	std::vector<Student> vec(count);

	int cho;
	while (true) {
		for (int i = 0; i < vec.size(); i++)
			vec.at(i).outputStudent(i);
		std::cout << "\n1. edit student\n2. exit program\n";
		std::cin >> cho;
		if (cho == 1) {
			int stu = 0;
			std::cout << "Выбор студента: ";
			std::cin >> stu;
			vec.at(stu).editStudent();
		}
		if (cho == 2) break;
		system("cls");
	}
}