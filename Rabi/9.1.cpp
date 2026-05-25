#include <iostream>
#include <vector>
#include <string>

class Robot {
	int x_, y_;

	Robot(): x_(1), y_(1){}
	Robot& Info() { std::cout << "я " << this << "сейчас € на " << x_ << ' ' << y_; }
	Robot& move(int move) { std::cout << "€ не знаю куда идти, выберу x"; x_ + move; }
	Robot& move(int y, int x) { y_ = y, x_ = x; }
	Robot& move(std::string obj) { 
		switch (obj) {
		case " укла":

			break;
		}
	}
};