#include <iostream>
#include <vector>
#include <string>

class Robot {
	int x_, y_;
	Robot& move(std::string obj) { 
	}
};

int main() {
	system("chcp 1251");
	Robot robot;
	robot.Info().move(4).Info().move(6,7).Info().move("чашка").move("стена").move("кукарачи");
}