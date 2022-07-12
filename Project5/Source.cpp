// ()연산자 함수 호출 연산자 오버로딩
#include <iostream>
using namespace std;

struct FuncObject
{
public:
	void operator() (int arg) const {
		cout << "정수 : " << arg << endl;
	}
};

void Print1(int arg) {
	cout << "정수 : " << arg << endl;
}


int main() {
	void (*Print2)(int) = Print1;
	FuncObject Print3;

	Print1(10); // 함수를 사용
	Print2(10); // 함수 포인터 사용
	Print3(10); // 함수 객체 사용 (Print3.operator(10)

	return 0;
}
/*
Print(10) 
함수 객체 : 함수 호출 연산자를 정의한 객체 
*/