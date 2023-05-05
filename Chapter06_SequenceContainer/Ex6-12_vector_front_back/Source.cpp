#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v[0] << ", " << v.front() << endl;	// 첫번째 원소
	cout << v[4] << ", " << v.back() << endl;	// 마지막 원소

	v.front() = 100;	// 첫번째 원소 참조
	v.back() = 500;		// 마지막 원소 참조
	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}

	return 0;
}