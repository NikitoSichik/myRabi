#include <iostream>
#include <vector>
#include <string>

class Robot {
	int x_, y_;
public:
	Robot(): x_(1), y_(1) {}
	Robot& Info() { std::cout << "Я " << this << " сейчас я на " << x_ << ' ' << y_ << '\n'; return *this; }
	Robot& move(int move) { std::cout << "я не знаю куда идти, выберу x\n"; x_ += move; return *this; }
	Robot& move(int y, int x) { y_ = y, x_ = x; return *this; }
	Robot& move(std::string obj) { 
		if (obj == "кукла" || obj == "чашка" || obj == "коробка") std::cout << "я могу её сдвинуть\n";
		else if (obj == "стена" || obj == "пол") std::cout << "я не могу её сдвинуть\n";
		else std::cout << "я не знаю что это\n";
		return *this;
	}
};

int main() {
	system("chcp 1251");
	Robot robot;
	robot.Info().move(4).Info().move(6,7).Info().move("чашка").move("стена").move("кукарачи");
}