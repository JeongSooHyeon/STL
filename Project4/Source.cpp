// ���� �Լ� ������ �����ε�
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
	int getX() const { return x; }
	int getY() const { return y; }
	friend const Point operator-(const Point& argL, const Point& argR);
	// friend class B;
};

//const Point operator-(const Point& argL, const Point& argR) {
//	return Point(argL.getX() - argR.getX(), argL.getY() - argR.getY());
//}
const Point operator-(const Point& argL, const Point& argR)
{
	return Point(argL.x - argR.x, argL.y - argR.y);
}
int main() {
	Point p1(2, 3), p2(5, 5);
	Point p3;
	
	p3 = p1 - p2;

	p3.Print();

	return 0;
}
/*
�Ϲ������� ��� �Լ��� �̿��� ������ �����ε� ���
����Լ��� �̿��� ������ �����ε� ����� �� ���� �� ���� �Լ� 
 -> ���� ������ ���� ���� ������ �����ε� ��ü�� �ƴ� ��

 private ��� ������ ���� �Ұ���
  -> getter, setter�Լ� ���
  -> friend �Լ� ��� (����)

  friend
  - �Լ� ������, Ŭ���� ������ 
*/