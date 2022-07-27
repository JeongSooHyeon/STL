// section 1 함수 포인터란
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void Print(int n)
{
	cout << "정수 : " << n << endl;
}

int main() {
	// 예제 2-2
	// void Print(int n)의 함수 포인터 선언
	void (*pf)(int);
	// 함수의 이름은 함수의 시작 주소
	pf = Print;

	Print(10); // 1. 함수 호출
	pf(10);	   // 2. 포인터를 이용한 함수 호출, 첫번째 방법
	(*pf)(10); // 3. 포인터를 이용한 함수 호출, 두번째 방법

	cout << endl;
	cout << Print << endl;
	cout << pf << endl;
	cout << *pf << endl;



	/*예제 2-1
	int n = 10;
	int* pn = &n;*/
	

	return 0;
}
/*
변수 : 값을 저장하는 메모리 공간 이름
포인터 : 주소를 저장하는 메모리 공간 이름
함수 포인터 : 함수의 시작 주소를 저장하는 포인터, 함수 시그니처를 같게 선언
함수 시그니처 : 함수의 반환 타입, 매개변수 리스트
함수 포인터에 메모리 접근 연산자(*)를 붙여도 함수의 주소
함수 호출 : pf(), (*pf)()로 호출
*/