#pragma once
#include <iostream>
#include <string>

class Plate{
	int Height_;
	int Width_;
	int Thickness_;
	int Weight_;
	std::string Material_;
	std::string manufacturer_;
	int cost_;
public:
	Plate();
	Plate(
		int Height,
		int Width,
		int Thickness,
		int Weight,
		std::string Material,
		std::string manufacturer,
		int cost
	);
	void PlatePrint();
};
