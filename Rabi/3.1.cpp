#include <iostream>
#include <string>
#include <vector>
class Car {
public:
	std::string marka_;
	std::string country_;
	int probeg_;
	int year_release_;
	int power_;

	Car(std::string marka, std::string country, int probeg, int year_release, int power) {
		marka_ = marka;
		country_ = country;
		probeg_ = probeg;
		year_release_ = year_release;
		power_ = power;
	}
};

int main() {
	int count;
	std::cin >> count;
	std::vector<Car> vec;

	for (int i = 0; i < count; i++) {
		std::string marka_, country_;
		int probeg_, year_release_, power_;
		std::cout << "marka: ";
		std::cin >> marka_;

		std::cout << "country_: ";
		std::cin >> country_;

		std::cout << "probeg_: ";
		std::cin >> probeg_;

		std::cout << "year_release_: ";
		std::cin >> year_release_;

		std::cout << "power_: ";
		std::cin >> power_;
		vec.emplace_back(marka_, country_, probeg_, year_release_, power_);
		std::cout << "\n\n";
	}
	for (int i = 0; i < count; i++)
		for (int j = 0; j < count - 1; j++)
			if (vec[j].year_release_ > vec[j + 1].year_release_)
				std::swap(vec.at(j), vec.at(j + 1));

	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec.at(i).marka_ << '\n' << vec.at(i).country_ << '\n' << vec.at(i).probeg_ << '\n' << vec.at(i).year_release_ << '\n' << vec.at(i).power_ << "\n\n";
	}
}