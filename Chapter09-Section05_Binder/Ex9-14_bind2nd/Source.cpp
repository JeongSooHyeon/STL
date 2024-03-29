#include <iostream>
#include <functional>
using namespace std;

int main() {
	// less의 두번째 인자를 10으로 고정한 단항 조건자 binder 생성
	binder2nd<less<int>> binder = bind2nd(less<int>(), 10);

	// binder는 두 번째 인자를 10으로 고정한 less
	cout << binder(5) << ':' << less<int>()(5, 10) << endl;
	// 두 문장이 같다.
	cout << binder(10) << ':' << less<int>()(10, 10) << endl;
	// 두 문장이 같다.
	cout << binder(20) << ':' << less<int>()(20, 10) << endl;
	// 두 문장이 같다.
	cout << "=====위와 같음=====" << endl;
	// 임시 객체 사용
	cout << bind2nd(less<int>(), 10)(5) << ':' << less<int>()(5, 10) << endl;
	cout << bind2nd(less<int>(), 10)(10) << ':' << less<int>()(10, 10) << endl;
	cout << bind2nd(less<int>(), 10)(20) << ':' << less<int>()(20, 10) << endl;

	return 0;
}