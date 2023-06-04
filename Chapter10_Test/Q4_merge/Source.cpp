#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(60);

	vector<int> v3(6);

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for (vector<int>::size_type i = 0; i < v3.size(); ++i)
		cout << v3[i] << endl;

	return 0;
}