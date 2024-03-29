#include <iostream>
#include <functional>
using namespace std;

template<typename T>
struct Logical_and : public binary_function<T, T, bool> {
	bool operator() (const T& left, const T& right) const {
		return left && right;
	}
};

int main() {
	int n = 30;
	Logical_and<bool> oAnd;
	// 1. oAnd 객체로 10 < n < 50인가? true. 암묵적 호출
	cout << oAnd(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
	// 2. oAnd 객체로 10 < n < 50인가? true. 명시적 호출
	cout << oAnd.operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
	// 3. 임시 객체로 10 < n < 50인가? true. 암묵적 호출(일반적인 사용)
	cout << Logical_and<bool>()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
	// 4. 임시 객체로 10 < n < 50인가? true. 명시적 호출
	cout << logical_and<bool>().operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;

	return 0;
}