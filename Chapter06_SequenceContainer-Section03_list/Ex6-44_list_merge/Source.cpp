#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);

	lt2.push_back(25);
	lt2.push_back(35);
	lt2.push_back(60);
	

	list<int>::iterator iter1;
	cout << "lt1 : ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
		cout << *iter1 << ' ';
	cout << endl;

	cout << "lt2 : ";
	for (iter1 = lt2.begin(); iter1 != lt2.end(); ++iter1)
		cout << *iter1 << ' ';
	cout << endl << "===============" << endl;

	lt1.merge(lt2);	// lt2를 lt1으로 합병 정렬. 정렬 기준 less

	cout << "lt1 : ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
		cout << *iter1 << ' ';
	cout << endl;

	cout << "lt2 : ";
	for (iter1 = lt2.begin(); iter1 != lt2.end(); ++iter1)
		cout << *iter1 << ' ';
	cout << endl;

	return 0;
}