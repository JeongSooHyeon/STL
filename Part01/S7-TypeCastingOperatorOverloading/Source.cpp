#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
	operator int() const {
		return x;
	}
};

int main() {
	int n = 10;

	Point pt(2, 3);
	n = pt;	// pt.operator int() 암시적 호출
	cout << n << endl;

	return 0;
}
//class A {
//
//};
//
//class B {
//public:
//	operator A() {
//		cout << "operator A() 호출" << endl;
//		return A();
//	}
//
//	operator int() {
//		cout << "operator int() 호출" << endl;
//		return 10;
//	}
//
//	operator double() {
//		cout << "operator double() 호출" << endl;
//		return 5.5;
//	}
//};
//
//int main() {
//	A a;
//	int n;
//	double d;
//
//	B b;	
//	a = b;	// b.operator() A() 암시적 호출
//	n = b;
//	d = b;
//
//	cout << endl;	
//	a = b.operator A();	// 명시적 호출
//	n = b.operator int();
//	d = b.operator double();
//
//
//	return 0;
//}