#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
	int GetX() const { return x; }
	int GetY() const { return y; }
	//const Point operator-(const Point& p) const {
	//	return Point(x - p.x, y - p.y);
	//}
	friend const Point operator-(const Point& p1, const Point& p2);
};
//const Point operator-(const Point& p1, const Point& p2) {
//	return Point(p1.GetX() - p2.GetX(), p1.GetY() - p2.GetY());
//}
const Point operator-(const Point& p1, const Point& p2) {
	return Point(p1.x - p2.x, p1.y - p2.y);
}

int main() {
	Point p1(2, 3), p2(5, 5);
	Point p3;

	p3 = p1 - p2;

	p3.Print();

	return 0;
}