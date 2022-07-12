// 전역 함수 연산자 오버로딩
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
일반적으로 멤버 함수를 이용한 연산자 오버로딩 사용
멤버함수를 이용한 연산자 오버로딩 사용할 수 없을 때 전역 함수 
 -> 이항 연산의 왼쪽 항이 연산자 오버로딩 객체가 아닐 때

 private 멤버 변수에 접근 불가능
  -> getter, setter함수 사용
  -> friend 함수 사용 (지양)

  friend
  - 함수 프렌드, 클래스 프렌드 
*/