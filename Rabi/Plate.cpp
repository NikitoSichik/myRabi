#include <iostream>
#include "class_Plate.hpp"

Plate::Plate() :
Height_ (100),
Width_ (20),
Thickness_ (40),
Weight_ (15),
Material_ ("керамика"),
cost_ (1000)
{}

Plate::Plate(
	int Height,
	int Width,
	int Thickness,
	int Weight,
	std::string Material,
	std::string manufacturer,
	int cost
) :
	Height_{ Height },
	Width_{Width},
	Thickness_{ Thickness },
	Weight_{Weight},
	Material_{ Material },
	manufacturer_ { manufacturer },
	cost_{cost}
{}

void Plate::PlatePrint() {
	std::cout << "высота: " << Height_ << '\n';
	std::cout << "ширина: " << Width_ << '\n';
	std::cout << "толщина: " << Thickness_ << '\n';
	std::cout << "вес: " << Weight_ << '\n';
	std::cout << "материал: " << Material_ << '\n';
	std::cout << "производитель: " << manufacturer_<< '\n';
	std::cout << "стоимость: " << cost_ << '\n';
}