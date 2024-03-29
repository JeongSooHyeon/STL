#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(50);
	lt1.push_back(40);
	lt1.push_back(30);
	lt1.push_back(20);
	lt1.push_back(10);

	//lt2.push_back(25);	// lt1과 lt2의 정렬 방식이 다르므로 오류
	//lt2.push_back(35);
	//lt2.push_back(60);

	// lt1과 lt2는 정렬 방식이 같음
	// greater 조건자( > 연산) 정렬 기준 사용
	lt2.push_back(60);
	lt2.push_back(35);
	lt2.push_back(25);


	list<int>::iterator iter;
	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << "===============" << endl;

	// lt2를 lt1으로 합병 정렬
	// 두 list의 정렬 기준이 greater(> 연산)라는 것을 predicate로 지정
	lt1.merge(lt2, greater<int>());

	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	return 0;
}