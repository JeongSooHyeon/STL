// 스마트 포인터 연산자 오버로딩
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
};

class PointPtr
{
	Point* ptr;
public:
	PointPtr(Point* p) :ptr(p) { }
	~PointPtr()
	{
		delete ptr;
	}
	Point* operator->() const
	{
		return ptr;
	}
	Point& operator* () const
	{
		return *ptr;
	}
};

int main() {
	Point* p1 = new Point(2, 3); // 메모리 할당
	PointPtr p2 = new Point(5, 5);

	 p1->Print(); // p1->Print()
	 p2->Print(); // p2.operator->()->Print()
	 cout << endl;

	 (*p1).Print(); // (*p1).Print()
	 (*p2).Print(); // p2.operator*().Print()

	 delete p1;


	// p1, p2의 소멸자에서 Point 동적 객체를 자동으로 메모리에서 제거

	//Point *p1 = new Point(2, 3); // 메모리 할당
	//Point* p2 = new Point(5, 5);

	//p1->Print(); // p1의 멤버 함수 호출
	//p2->Print();

	//delete p1; // 메모리 제거
	//delete p2;

	return 0;
}
/*
스마트 포인터를 만들어 놓으면 동적으로 생성한 객체를 소멸자에서 자동 삭제
프로그램 중 예외 발생 시 delete 호출을 빼먹어 발생하는 동적 메모리 누수 현상 방지

 -> : 클래스의 멤버 접근
 * : 포인터가 가리키는 객체 자체
*/