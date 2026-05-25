#include <iostream>

class Squad {
	int archers_, spearman_, horseman_;

public:
	Squad () : archers_(1), spearman_(2), horseman_(3) {}
	Squad (int archers, int spearman, int horseman) : archers_(archers), spearman_(spearman), horseman_(horseman) {}
	~Squad() { archers_ = 0; spearman_ = 0; horseman_ = 0; }

	int getSum() const { return archers_ + spearman_ + horseman_; }

	friend Squad operator+(Squad&, Squad&);
	friend Squad operator-(Squad&, Squad&);
};

Squad operator+(Squad& left, Squad& right) {
	Squad result(left.archers_ + right.archers_, left.spearman_ + right.spearman_, left.horseman_ + right.horseman_);
	left.~Squad(); right.~Squad();
	return result;
}

Squad operator-(Squad& left, Squad& right) {
	if (left.getSum() > right.getSum())  return left;
	else return right;
}
