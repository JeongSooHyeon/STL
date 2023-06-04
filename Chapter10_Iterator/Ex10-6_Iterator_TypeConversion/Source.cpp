#include<iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// 비 const 반복자 -> const 반복자 형변환
	vector<int>::iterator iter = v.begin() + 1;
	vector<int>::const_iterator citer = iter;

	// 정방향 반복자 -> 역방향 반복자 암묵적 변환
	// vector<int>::reverse_iterator riter(iter)과 같다
	reverse_iterator<vector<int>::iterator> riter(iter);
	// vector<int>::const_reverse_iterator criter(riter)과 같다
	reverse_iterator<vector<int>::const_iterator> criter(riter);

	cout << "iter : " << *iter << endl;
	cout << "citer : " << *citer << endl;
	cout << "riter : " << *riter << endl;
	cout << "criter : " << *criter << endl;
	cout << "====================" << endl;

	// 역방향 반복자 base() 정방향 반복자로 형변환
	cout << "riter.begin() => iter : " << *riter.base() << endl;
	cout << "criter.base() => citer : " << *criter.base() << endl;

	return 0;
}