#include <iostream>
#include <functional>
using namespace std;

struct Unary :public unary_function<int, bool> {
	bool operator()(int arg)const {
		return arg < 100;
	}
};
struct Binary :public binary_function<int, int, bool> {
	bool operator()(int first, int second) const {
		return first == second;
	}
};
int main() {
	cout << Unary()(50) << endl;
	// 단항 조건자를 NOT한다
	cout << not1(Unary())(50) << endl;

	cout << Binary()(1, 1) << endl;
	// 이항 조건자를 NOT한다.
	cout << not2(Binary())(1, 1) << endl;

	//less<int> oLess;
	//binary_negate<less<int>> negate2 = not2(less<int>());
	//cout << negate2(5, 10) << ':' << not2(oLess)(5, 10) << ':' << not2(less<int>())(5, 10) << endl;

	//binder2nd<less<int>> binder = bind2nd(less<int>(), 10);
	//unary_negate<binder2nd<less<int>> > negate1 = not1(binder);
	//cout << negate1(5) << ':' << not1(binder)(5) << ':' << not1(bind2nd(less<int>(), 10))(5) << endl;

	return 0;
}