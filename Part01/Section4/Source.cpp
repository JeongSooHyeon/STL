#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }

	bool operator==(Point p) const{
		return x == p.x && y == p.y ? true : false;
	}
	bool operator!=(Point p) const {
		return !(*this == p);
	}
};

int main() {
	Point p1(2, 3), p2(5, 5);
	Point p3(5, 5);
	if (p1 == p2)
		cout << "p1==p2" << endl;
	
	if (p1 != p2)
		cout << "p1!=p2" << endl;

	if (p2 == p3)
		cout << "p2==p3" << endl;

	return 0;
}