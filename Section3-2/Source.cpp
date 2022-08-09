// section 2 함수 객체 구현
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <functional> // less<> 헤더, greater<>, plus<>, minus<>
using namespace std;

typedef less<int> Less; // 템플릿 콜래스를 짧고 쉬운 이름을 사용하기 위해

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};

struct Minus
{
	int operator()(int a, int b)
	{
		return a - b;
	}
};

bool Pred_less(int a, int b)
{
	return a < b;
}

struct Less
{
	bool operator()(int a, int b)
	{
		return a < b;
	}
};

struct Greater
{
	bool operator()(int a, int b)
	{
		return a > b;
	}
};
int main() {
	Less l;

	cout << Pred_less(10, 20) << endl;
	cout << Pred_less(20, 10) << endl;
	cout << endl;
	cout << l(10, 20) << endl; // l 객체로 암묵적 함수 호출
	cout << l(20, 10) << endl;
	cout << Less()(10, 20) << endl; // 임시 객체로 암묵적 함수 호출
	cout << Less()(20, 10) << endl;
	cout << Greater()(10, 20) << endl; // 사용자 Greater 사용
	cout << Greater()(20, 10) << endl;
	cout << endl;
	cout << l.operator()(10, 20) << endl; // 명시적 호출
	cout << Less().operator()(10, 20) << endl;
	cout << less<int>()(10, 20) << endl; // STL의 less, greater 사용
	cout << less<int>()(20, 10) << endl;
	cout << greater<int>()(10, 20) << endl;
	cout << greater<int>()(20, 10) << endl;


	return 0;
}
/*
less : < 연산자 함수 객체
greater : > 연산자 함수 객체
bool형을 반환하는 조건자
*/