#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(50);

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

	return 0;
}