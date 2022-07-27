// section 2 함수 포인터의 종류
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void Print(int n)
{
	cout << "정적 함수 Print()" << n << endl;
}

namespace A
{
	void Print(int n)
	{
		cout << "namespace A 전역 함수: " << n << endl;
	}
}

class Point
{
	int x;
	int y;
public:
	explicit Point(int _x = 0, int _y = 0):x(_x),y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
	void PrintInt(int n) { cout << "테스트 정수 : " << n << endl; }
};

int main() {
	// 예제 2-5 멤버 함수 호출
	Point pt(2, 3);
	Point* p = &pt;

	void (Point:: * pf1) () const; // 멤버 함수 포인터 선언
	pf1 = &Point::Print;

	void (Point:: * pf2) (int); // 멤버 함수 포인터 선언
	pf2 = &Point::PrintInt;

	pt.Print();
	pt.PrintInt(10);
	cout << endl;

	(pt.*pf1) (); // 객체로 멤버 함수 푄터를 이용한 호출
	(pt.*pf2) (10);
	cout << endl;

	(p->*pf1) (); // 주소로 멤버 함수 포인터를 이용한 호출
	(p->*pf2) (10); 


	// 예제 2-4 정적 함수 호출
	//void (*pf)(int); // 정적 함수 포인터 선언

	//Print(10);       // namespace 없는 전역 함수 호출
	//A::Print(10);    // namespace A의 전역 함수 호출
	//Point::Print(10); // Point 클래스의 정적 멤버 함수 호출

	//pf = Print;
	//pf(10);		// 함수 포인터로 namespace 없는 전역 함수 호출
	//pf = A::Print;
	//pf(10);		// 함수 포인터로 namespace A의 전역 함수 호출
	//pf = Point::Print;
	//pf(10);		// 함수 포인터로 Point 클래스의 정적 멤버 함수 호출

	// 예제 2-3
	//Point pt;
	//Point* p = &pt;

	//Print(); // 정적 함수 호출
	//pt.Print(); // 객체로 멤버 함수 호출
	//p->Print(); // 주소로 멤버 함수 호출

	return 0;
}
/*
정적 함수 : 전역 함수, namespace 내의 전역 함수, static 멤버 함수
멤버 함수 
정적 함수 호출(정적 함수)
객체로 멤버 함수 호출(멤버 함수)
객체의 주소로 멤버 함수 호출(멤버 함수)

정적 함수들은 함수 호출 규약이 같아서 함수 포인터가 같다

멤버 함수 포인터는 함수 포인터 선언에 어떤 클래스의 멤버 함수를 가리킬 것인지 클래스 이름 지정
객체로 멤버 함수 호출 : .* 연산자 이용 (객체(.*pf)(10))
주소로 멤버 함수 호출 : ->* 연산자 이용 (주소->*pf)(10))

*/