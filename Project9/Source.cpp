// 1-7 타입 변환 연산자 오버로딩
// explicit
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
};

int main() {
	Point pt;
	pt.Print();

	// pt = 10; // 에러 암시적 생성자 호출 불가능
	pt = Point(10); // 명시적 호출
	pt.Print();

	return 0;
}
/*
explicit 생성자는 명시적 호출만 가능

*/