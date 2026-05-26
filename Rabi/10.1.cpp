#include <iostream>

class Body {
	int size_;
	int weight_;
public:
	Body(int size, int weight) : size_(size), weight_(weight) {}

	void Print() {
		std::cout <<
			"size: " << size_ <<
			"\nweight: " << weight_;
	}
};

class AreaBody : public Body {
	int x_;
	int y_;
public:
	AreaBody(int size, int weight, int x, int y) : Body(size, weight), x_(x), y_(y) {}
};

int main() {
	AreaBody obj(10, 5, 100, 200);
	obj.Print();
}