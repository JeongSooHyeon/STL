#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }

	const Point& operator--() {	// 전위--
		--x;
		--y;

		return *this;
	}
	const Point operator--(int) {	// 후위--
		Point p(x, y);
		x--;
		y--;

		return p;
	}
};

int main() {
	Point p1(2, 3), p2(5, 5);
	Point result;

	result = --p1;
	p1.Print();
	result.Print();

	result = p2--;
	p2.Print();
	result.Print();

	return 0;
}