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

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));	cout << endl;

	v.erase(find(v.begin(), v.end(), 30));
	// find() 로 30원소의 반복자를 찾고 가리키는 원소 제거

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));	cout << endl;

	return 0;
}