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
	n = pt;	// pt.operator int() �Ͻ��� ȣ��
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
//		cout << "operator A() ȣ��" << endl;
//		return A();
//	}
//
//	operator int() {
//		cout << "operator int() ȣ��" << endl;
//		return 10;
//	}
//
//	operator double() {
//		cout << "operator double() ȣ��" << endl;
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
//	a = b;	// b.operator() A() �Ͻ��� ȣ��
//	n = b;
//	d = b;
//
//	cout << endl;	
//	a = b.operator A();	// ����� ȣ��
//	n = b.operator int();
//	d = b.operator double();
//
//
//	return 0;
//}