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
	if ((human.month >= 3 and human.day >= 21) || (human.month <= 4 and human.day <= 20)) znak = "Овен";
	if ((human.month >= 4 and human.day >= 21) || (human.month <= 5 and human.day <= 20)) znak = "Телец";
	if ((human.month >= 5 and human.day >= 21) || (human.month <= 6 and human.day <= 20)) znak = "Близнецы ";
	if ((human.month >= 6 and human.day >= 21) || (human.month <= 7 and human.day <= 20)) znak = "Рак ";
	if ((human.month >= 7 and human.day >= 21) || (human.month <= 8 and human.day <= 20)) znak = "Лев ";
	if ((human.month >= 8 and human.day >= 21) || (human.month <= 9 and human.day <= 20)) znak = "Дева ";
	if ((human.month >= 9 and human.day >= 21) || (human.month <= 10 and human.day <= 20)) znak = "Весы ";
	if ((human.month >= 10 and human.day >= 21) || (human.month <= 11 and human.day <= 20)) znak = "Скорпион ";
	if ((human.month >= 11 and human.day >= 21) || (human.month <= 12 and human.day <= 20)) znak = "Стрелец ";
	if ((human.month >= 12 and human.day >= 21) || (human.month <= 1 and human.day <= 20)) znak = "Козерог ";
	if ((human.month >= 1 and human.day >= 21) || (human.month <= 2 and human.day <= 20)) znak = "Водолей";
	if ((human.month >= 2 and human.day >= 21) || (human.month <= 3 and human.day <= 20)) znak = "Рыбы";
	std::cout << "Ты: " << human.firstname << ' ' << human.secondname << '\n';
	std::cout << "Тебе: " << age << " лет" << '\n';
	std::cout << "Твой знак: " << znak << '\n';
}

int main() {
	system("chcp 1251");
	Human Nikita;
	editHuman(Nikita);
}