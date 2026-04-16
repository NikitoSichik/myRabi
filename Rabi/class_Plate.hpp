#pragma once
#include <iostream>
#include <string>

class Plate{
	int height_;
	int width_;
	int thickness_;
	int weight_;
	std::string material_;
	std::string manufacturer_;
	int cost_;
public:
	Plate();
	Plate(
		int height,
		int width,
		int thickness,
		int weight,
		std::string material,
		std::string manufacturer,
		int cost
	);
	void platePrint();
	void plateEdit();
};
