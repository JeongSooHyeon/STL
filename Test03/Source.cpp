// 짚고 넘어가기
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <functional> // less<> 헤더, greater<>, plus<>, minus<>
using namespace std;

class Adder
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
class Equal
{
public:
	int operator()(int a, int b)
	{
		return a == b;
	}
};

int main() {
	Equal cmp;
	Adder add;

	int sum = add(10, 20);
	cout << "sum= " << sum << endl;
	if (cmp(10, 20))
		cout << "같다!" << endl;
	else
		cout << "다르다!" << endl;

	return 0;
}
/*
less : < 연산자 함수 객체
greater : > 연산자 함수 객체
bool형을 반환하는 조건자
*/