#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Accumulation {
	int total;
public:
	explicit Accumulation(int init = 0) : total(init) {}
	void operator() (int& r) {
		total += r;
		r = total;
	}
};

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	// [v.begin(), v.end()) 모든 원소를 초깃값 0부터 시작해 *p += *(p-1)를 적용
	for_each(v.begin(), v.end(), Accumulation(5));
	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}