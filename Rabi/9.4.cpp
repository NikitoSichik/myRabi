#include <iostream>

class Squad {
	int archers_, spearman_, horseman_;

public:
	Squad() : archers_(0), spearman_(0), horseman_(0) {}
	Squad(int archers, int spearman, int horseman) : archers_(archers), spearman_(spearman), horseman_(horseman) {}

	int getSum() const { return archers_ + spearman_ + horseman_; }

	friend Squad operator+(Squad&, Squad&);
	friend Squad operator-(Squad&, Squad&);
	friend bool operator>(Squad&, Squad&);
	friend bool operator<(Squad&, Squad&);
	friend bool operator==(Squad&, Squad&);
	friend std::ostream& operator<<(std::ostream&, const Squad&);
	friend std::istream& operator>>(std::istream&, Squad&);
};

Squad operator+(Squad& left, Squad& right) {
	Squad result(left.archers_ + right.archers_, left.spearman_ + right.spearman_, left.horseman_ + right.horseman_);
	left.archers_ = 0; left.spearman_ = 0; left.horseman_ = 0;
	right.archers_ = 0; right.spearman_ = 0; right.horseman_ = 0;
	return result;
}

Squad operator-(Squad& left, Squad& right) {
	if (left.getSum() > right.getSum()) {
		left.archers_ -= right.archers_;
		left.spearman_ -= right.spearman_;
		left.horseman_ -= right.horseman_;
		right.archers_ = 0; right.spearman_ = 0; right.horseman_ = 0;
		return left;
	}
	else {
		right.archers_ -= left.archers_;
		right.spearman_ -= left.spearman_;
		right.horseman_ -= left.horseman_;
		left.archers_ = 0; left.spearman_ = 0; left.horseman_ = 0;
		return right;
	}
}

bool operator>(Squad& left, Squad& right) {
	return left.getSum() > right.getSum();
}

bool operator<(Squad& left, Squad& right) {
	return left.getSum() < right.getSum();
}

bool operator==(Squad& left, Squad& right) {
	return left.getSum() == right.getSum();
}

std::ostream& operator<<(std::ostream& out, const Squad& obj) {
	out << "Archers: " << obj.archers_ << ", Spearman: " << obj.spearman_ << ", Horseman: " << obj.horseman_;
	return out;
}

std::istream& operator>>(std::istream& in, Squad& obj) {
	in >> obj.archers_ >> obj.spearman_ >> obj.horseman_;
	return in;
}

int main() {
	Squad squad1(10, 5, 3);
	Squad squad2(7, 8, 2);

	std::cout << "Squad1: " << squad1 << '\n';
	std::cout << "Squad2: " << squad2 << '\n';

	Squad squad3 = squad1 + squad2;
	std::cout << "After + : " << squad3 << '\n';

	Squad squad4(15, 10, 5);
	Squad squad5(5, 3, 2);
	Squad squad6 = squad4 - squad5;
	std::cout << "After - : " << squad6 << '\n';

	std::cout << "squad4 > squad5: " << (squad4 > squad5) << '\n';
	std::cout << "squad4 < squad5: " << (squad4 < squad5) << '\n';
	std::cout << "squad4 == squad5: " << (squad4 == squad5) << '\n';
}