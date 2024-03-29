#include <iostream>
using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) :x_(x), y_(y) {};
	Point& SetX(int x) {
		x_ = x;
		return *this;
	}
	Point& SetY(int y) {
		y_ = y;
		return *this;
	}
	void Print() {
		cout << "(" << x_ << ", " << y_ << ")" << endl;
	}

private:
	int x_;
	int y_;
};

int main() {

	Point pt1;

	pt1.SetX(3).SetY(4);
	pt1.Print();

	pt1.SetY(6).SetX(5);
	pt1.Print();

	return 0;
}