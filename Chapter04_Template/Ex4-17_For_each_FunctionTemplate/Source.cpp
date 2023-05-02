#include <iostream>
#include <string>
using namespace std;

template<typename IterT, typename Func>
void For_each(IterT begin, IterT end, Func pf) {
	while (begin != end) {
		pf(*begin++);
	}
}

template<typename T>
void Print(T data) {
	cout << data << " ";
}

//void PrintInt(int data) {
//	cout << data << " ";
//}
//
//void PrintString(string data) {
//	cout << data << " ";
//}

int main() {
	int arr[5] = { 10,20,30,40,50 };
	//For_each(arr, arr + 5, PrintInt);	// 정수 출력
	For_each<int*, void(*)(int)>(arr, arr + 5, Print<int>);	// 명시적 함수 템플릿 호출
	cout << endl;

	string sarr[3] = { "abc", "ABCDE", "Hello!" };
	//For_each(sarr, sarr + 3, PrintString);	// 문자열 출력
	For_each<string*, void(*)(string)>(sarr, sarr + 5, Print<string>);	// 명시적 함수 템플릿 호출
	cout << endl;

	return 0;
}