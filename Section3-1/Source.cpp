// section 1 함수 객체란
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//void Print(int a, int b) 
//{
//	cout << "전역 함수: " << a << ',' << b << endl;
//}
//
//struct Functor
//{
//	void operator() (int a, int b)
//	{
//		cout << "함수 객체: " << a << ',' << b << endl;
//	}
//};

class Adder
{
	int total;
public:
	explicit Adder(int n= 0):total(n) { }
	int operator()(int n) // 암묵적 인라인 함수
	{
		cout << n << "용" << endl;
		return total += n;
	}
};

int main() {
	// 예제 3-3
	Adder add(0); // 초깃값 0

	cout << add(10) << endl;
	cout << add(20) << endl;
	cout << add(30) << endl;


	// 예제 3-2
	//Functor functor;

	//Print(10, 20); // 전역 함수 호출
	//functor(10, 20); // 멤버 함수 호출 functor.operator() (10, 20)와 같다

	return 0;
}
/*
함수 객체(함수자 functor) : 함수처럼 동작하는 객체
객체가 ()연산자 정의(오버로딩)

다른 멤버 변수와 멤버 함수를 가질 수 있고 일반 함수에서 하지 못하는 지원 받을 수 있다
인라인될 수 있고, 컴파일러가 쉽게 최적화 가능
*/