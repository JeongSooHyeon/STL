#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
	const Point operator+(const Point& p) const {
		Point result;
		result.x = this->x + p.x;
		result.y = this->y + p.y;

		return result;
	}
};

int main() {
	Point p1(2, 3), p2(5, 5);

	Point p3 = p1 + p2;	// p1.operator+(p2)

	p3.Print();
	return 0;
}