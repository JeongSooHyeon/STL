#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(70);
	v.push_back(80);
	v.push_back(90);
	v.push_back(100);

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));	cout << endl;

	reverse(v.begin(), v.begin() + v.size() / 2);
	// reverse() 알고리즘으로 [v.begin(), v.begin()+v.size()/2)
	// 순차열을 뒤집는다.

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));	cout << endl;

	return 0;
}