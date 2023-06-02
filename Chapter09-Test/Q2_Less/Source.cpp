#include<iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <iterator>
using namespace std;

template<typename T>
struct Less : public binary_function<T,T,T> {
public:
	bool operator()(const T& left, const T& right) const{
		return left < right;
	}
};

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(2);
	v.push_back(222);
	v.push_back(4);
	v.push_back(5);

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// Less<>에 bind1st<> 어댑터를 사용하여 30보다 큰 첫 번째 원소를 출력
	cout << *find_if(v.begin(), v.end(), bind1st<Less<int>>(Less<int>(), 30)) << endl;

	return 0;
}