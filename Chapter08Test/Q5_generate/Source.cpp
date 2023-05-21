#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class Increment {
	int interval;
	int current;
public:
	explicit Increment(int iv) :interval(iv), current(0) {}
	int operator()() {
		current = current + interval;
		return current;
	}
};

struct Sum {
	int operator()(int left, int right) const {
		return left + right;
	 }
};

int main() {
	vector<int> v1(10), v2(10), v3(10);
	// v1, v2, v3를 size 10

	// v1, v2를 여러가지 방법으로 초기화
	generate(v1.begin(), v1.end(), Increment(10));
	// 10씩 증가한 정수를 순차열에 대입
	generate(v2.begin(), v2.end(), Increment(10));

	cout << "v1 : ";
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));	cout << endl;
	cout << "v2 : ";
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));	cout << endl;
	cout << "v3 : ";
	copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " "));	cout << endl;

	// v1과 v2의 합을 v3에 저장
	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Sum());

	cout << endl << "v1 : ";
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));	cout << endl;
	cout << "v2 : ";
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));	cout << endl;
	cout << "v3 : ";
	copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " "));	cout << endl;

	return 0;
}