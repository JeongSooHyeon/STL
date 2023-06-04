#include <iostream>
#include <vector>
#include <list>
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

	cout << "v : ";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout));
	cout << endl;

	cout << "v : ";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;

	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);

	cout << "lt + v : ";
	transform(lt.begin(), lt.end(), v.begin(), ostream_iterator<int>(cout, " "), plus<int>());
	cout << endl;

	return 0;
}