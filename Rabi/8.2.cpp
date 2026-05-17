#include <iostream>
#include <vector>
#include <string>

class Enemy {
	std::string name_;
	int health_;
	int damage_;
	std::string name1[3] = {"Никита ", "Вова ", "Петя "};
	std::string name2[3] = {"Жирный", "Сильный", "Тяжёлый"};
	static int mnojitely_;

public:
	Enemy () {
		mnojitely_ = 2;
		name_ = name1[rand() % 2] + name2[rand() % 2];
		health_ = mnojitely_ * rand()%10 + 2;
		damage_ = mnojitely_ * rand() % 5 + 1;
	}

	void EnemyInfo() {
		std::cout <<
			name_ << '\t' <<
			"Здоровье: " << health_ << '\t' <<
			"Урон: " << damage_ << '\n';
	}

	static int mnojitelyFu(int mnojitely) {
		return mnojitely;
	}
};

int main() {
	system("chcp 1251");
	srand(static_cast<int>(time(0)));
	int mnojitely = 2;
	std::vector<Enemy> vec(4);
	std::cout << "Множитель " << vec.at(0).mnojitelyFu(mnojitely) << '\n';
	for (int i = 0; i < vec.size(); i++)
		vec.at(i).EnemyInfo();
	vec.clear();
	std::cout << "\nНапишите модификатор:\n";
	std::cin >> mnojitely;
	std::cout << "\n===================================\n";
	std::cout << "Множитель " << vec.at(0).mnojitelyFu(mnojitely) << '\n';
	for (int i = 0; i < 5; i++)
		vec.emplace_back();
	for (int i = 0; i < vec.size(); i++)
		vec.at(i).EnemyInfo();
}