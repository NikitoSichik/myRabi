#include <iostream>
#include <string>

struct Human
{
	std::string firstname, secondname;
	int day, month, year;
};

void editHuman(Human& human) {
	std::cin >> human.firstname >> human.secondname >> human.day >> human.month >> human.year;
	int age = 2026 - human.year;
	std::string znak;
	if ((human.month == 3 && human.day >= 21) || (human.month == 4 && human.day <= 20))
		znak = "Овен";
	else if ((human.month == 4 && human.day >= 21) || (human.month == 5 && human.day <= 20))
		znak = "Телец";
	else if ((human.month == 5 && human.day >= 21) || (human.month == 6 && human.day <= 20))
		znak = "Близнецы";
	else if ((human.month == 6 && human.day >= 21) || (human.month == 7 && human.day <= 20))
		znak = "Рак";
	else if ((human.month == 7 && human.day >= 21) || (human.month == 8 && human.day <= 20))
		znak = "Лев";
	else if ((human.month == 8 && human.day >= 21) || (human.month == 9 && human.day <= 20))
		znak = "Дева";
	else if ((human.month == 9 && human.day >= 21) || (human.month == 10 && human.day <= 20))
		znak = "Весы";
	else if ((human.month == 10 && human.day >= 21) || (human.month == 11 && human.day <= 20))
		znak = "Скорпион";
	else if ((human.month == 11 && human.day >= 21) || (human.month == 12 && human.day <= 20))
		znak = "Стрелец";
	else if ((human.month == 12 && human.day >= 21) || (human.month == 1 && human.day <= 20))
		znak = "Козерог";
	else if ((human.month == 1 && human.day >= 21) || (human.month == 2 && human.day <= 20))
		znak = "Водолей";
	else if ((human.month == 2 && human.day >= 21) || (human.month == 3 && human.day <= 20))
		znak = "Рыбы";
	std::cout << "Ты: " << human.firstname << ' ' << human.secondname << '\n';
	std::cout << "Тебе: " << age << " лет" << '\n';
	std::cout << "Твой знак: " << znak << '\n';
}

int main() {
	system("chcp 1251");
	Human Nikita;
	editHuman(Nikita);
}