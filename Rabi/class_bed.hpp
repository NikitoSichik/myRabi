#pragma once 
#include <iostream>
#ifndef defence
#define defence
class Bed {
	bool two_tiered_;
	int number_of_seats_;
	std::string material_;
	std::string manufacturer,
	int money_;
public:
	Bed();
	void BedEdit();
	void BedPrint();
};

#endif