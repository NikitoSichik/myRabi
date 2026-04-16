#include <iostream>
#include "class_Plate.hpp"

Plate::Plate() :
height_ (100),
width_ (20),
thickness_ (40),
weight_ (15),
material_ ("керамика"),
cost_ (1000)
{}

Plate::Plate(
	int height,
	int width,
	int thickness,
	int weight,
	std::string material,
	std::string manufacturer,
	int cost
) :
	height_{ height },
	width_{width},
	thickness_{ thickness },
	weight_{weight},
	material_{ material },
	manufacturer_ { manufacturer },
	cost_{cost}
{}

void Plate::platePrint() {
	std::cout << "высота: " << height_ << '\t';
	std::cout << "ширина: " << width_ << '\t';
	std::cout << "толщина: " << thickness_ << '\t';
	std::cout << "вес: " << weight_ << '\t';
	std::cout << "материал: " << material_ << '\t';
	std::cout << "производитель: " << manufacturer_<< '\t';
	std::cout << "стоимость: " << cost_ << '\n';
}

void Plate::plateEdit() {
	std::cout << "высота: ";
	std::cin >> height_;
	std::cout << "ширина: ";
	std::cin >> width_;
	std::cout << "толщина: ";
	std::cin >> thickness_;
	std::cout << "вес: ";
	std::cin >> weight_;
	std::cout << "материал: ";
	std::cin >> material_;
	std::cout << "производитель: ";
	std::cin >> manufacturer_;
	std::cout << "стоимость: ";
	std::cin >> cost_;
}