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

	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();

	cout << *iter << endl;	
	cout << *citer << endl;

	cout << *++iter << endl;
	cout << *++citer << endl;

	*iter = 100;	// 일반 반복자가 가리키는 원소를 변경할 수 있음
	// *citer = 100;	// 상수 반복자는 가리키는 원소를 변경할 수 없음

	return 0;
}