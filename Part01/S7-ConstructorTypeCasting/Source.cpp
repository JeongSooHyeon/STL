#include <iostream>
using namespace std;

class A {

};

class B {
public:
	B() { cout << "B() 积己磊" << endl; }
	B(A& _a) { cout << "B(A _a) 积己磊" << endl; }
	B(int n) { cout << "B(int n) 积己磊" << endl; }
	B(double d) { cout << "B(double d) 积己磊" << endl; }
};

int main() {
	A a;
	int n = 10;
	double d = 5.5;

	B b;	// B() 积己磊
	b = a;	// b = B(a) 鞠矫利 积己磊 龋免 饶 措涝
	b = n;
	b = d;

	return 0;
}