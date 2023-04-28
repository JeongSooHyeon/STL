#include <iostream>
using namespace std;

struct FuncObject { // 함수 객체 : 함수 호출 연산자 정의
public:
	void operator() (int arg) const {
		cout << "정수 : " << arg << endl;
	}
	void operator()(int arg1, int arg2) const {
		cout << "정수 : " << arg1 << ',' << arg2 << endl;
	}
	void operator()(int arg1, int arg2, int arg3) const {
		cout << "정수 : " << arg1 << ',' << arg2 << ',' << arg3 << endl;
	}

};

void Print1(int arg) {
	cout << "정수 : " << arg << endl;
}

int main() {
	void (*Print2)(int) = Print1; // 함수 포인터
	FuncObject Print3;

	Print1(10);	// 함수 를 사용한 정수 출력
	Print2(10);	// 함수 포인터 를 사용한 정수 출력

	Print3(10); // 함수 객체 를 사용한 정수 출력 (Print3.operator(10)), 객체 생성 후 호출(암시적)
	Print3(10, 20);
	Print3(10, 20, 30);
	cout << endl;

	Print3.operator()(10);	// 객체 생성 후 호출(명시적)
	Print3.operator()(10, 20);
	Print3.operator()(10, 20, 30);
	cout << endl;

	FuncObject()(10);	// 임시 객체로 호출(암시적)
	FuncObject()(10, 20);
	FuncObject()(10, 20, 30);

	FuncObject().operator()(10);	// 임시 객체로 호출(명시적)
	FuncObject().operator()(10, 20);
	FuncObject().operator()(10, 20, 30);

	return 0;
}