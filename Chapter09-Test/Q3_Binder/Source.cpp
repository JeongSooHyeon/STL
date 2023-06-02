#include <iostream>
#include <functional>
using namespace std;

int main() {
	// 첫번째 항 고정
	binder1st<less<int>> binder1 = bind1st(less<int>(), 10);

	cout << binder1(5) << ':' << less<int>()(10, 5) << endl;
	cout << bind1st(less<int>(), 10)(5) << ':' << less<int>()(10, 5) << endl;

	// 두번째 항 고정
	binder2nd<less<int>> binder2 = bind2nd(less<int>(), 10);

	cout << binder2(5) << ':' << less<int>()(5, 10) << endl;
	cout << bind2nd(less<int>(), 10)(5) << ':' << less<int>()(5, 10) << endl;

	return 0;
}