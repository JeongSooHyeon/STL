// section 3 클라이언트 코드와 서버 코드
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void Client();

///// 서버 /////
// 배열의 모든 원소에 반복적인 작업을 수행하게 추상화됨(구체적인 작업은 없음)
void For_each(int* begin, int* end, void (*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++); // 클라이언트 함수 호출(콜백)
	}
}

///// 클라이언트 /////
void Print1(int n)	// 공백을 이용해 원소를 출력
{
	cout << n << ' ';

}

void Print2(int n) // 각 원소를 제곰해 출력
{
	cout << n*n << " ";
}

void Print3(int n) // 문자열과 endl을 이용해 원소 출력
{
	cout << "정수 : " << n << endl;
}

//void Client() // 콜백 함수
//{
//	cout << "난 client" << endl;
//}

int main() {
	// 예제 2-8
	int arr[5] = {10, 20, 30, 40, 50};

	For_each(arr, arr + 5, Print1); // Print1() 콜백 함수의 주소를 전달
	cout << endl << endl;
	For_each(arr, arr + 5, Print2); // Print2() 콜백 함수의 주소를 전달
	cout << endl << endl;
	For_each(arr, arr + 5, Print3);

	// 예제 2-6, 2-7
	//PrintHello(); // 서버 코드 호출


	return 0;
}
/*
call : 클라이언트가 서버를 호출
callback : 서버가 클라이언트를 호출

서버에 클라이언트 정보를 제공하는 방법 : 함수 포인터 매개변수를 이ㅛㅇ해 콜백 함수의 주소를 전달 (함수 객체, 대리자, 전략 패턴 등 사용)
*/