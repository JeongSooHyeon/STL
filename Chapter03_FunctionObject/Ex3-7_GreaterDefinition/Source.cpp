#include <iostream>
#include <functional>	// less<>, greater<> 
using namespace std;

struct Less {
	bool operator()(int a, int b) {
		return a < b;
	}
};

struct Greater {
	bool operator()(int a, int b) {
		return a > b;
	}
};

int main() {
	cout << Less()(10, 20) << endl;	// 사용자 Less, Greater 사용
	cout << Greater()(20, 10) << endl;

	cout << less<int>()(10, 20) << endl;	// STL의 less, greater 사용
	cout << greater<int>()(10, 20) << endl;

	return 0;
}