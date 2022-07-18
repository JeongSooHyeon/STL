// 1-7 타입 변환 연산자 오버로딩
#include <iostream>
using namespace std;

class A
{

};

class B
{
public:
	operator A()
	{
		cout << "operator A() 호출" << endl;
		return A();
	}

	operator int()
	{
		cout << "operator int() 호출" << endl;
		return 10;
	}

	operator double()
	{
		cout << "operator double() 호출" << endl;
		return 5.5;
	}
};

int main() {
	A a;
	int n;
	double d;

	B b;
	a = b; // b.operator A() 암시적 호출
	n = b; // b.operator int()
	d = b; // b.operator double()

	cout << endl;
	a = b.operator A(); // 명시적 호출
	n = b.operator int();
	d = b.operator double();


	return 0;
}
/*
 변환 연산자는 생성자나 소멸자처럼 반환 타입을 지정하지 않음
*/