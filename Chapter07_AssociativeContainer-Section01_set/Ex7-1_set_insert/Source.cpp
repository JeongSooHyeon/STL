#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;	// 정수 원소를 저장하는 기본 정렬 기준이 less인 빈 컨테이너

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
		
	set<int>::iterator iter;	// 기본 정렬 기준이 less인 set의 양방향 반복자
	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";	//inorder 이진 트리 탐색 순서로 출력
	cout << endl;

	s.insert(50);	// 중복된 원소(key) 삽입, 실패!!
	s.insert(50);

	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";	// 결과는 같다
	cout << endl;

	return 0;
}