// section 2 함수 템플릿
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template<typename T, int size>
void PrintArray(T* arr)
{
	for (int i = 0; i < size; ++i)
	{
		cout << "[" << i << "]: " << arr[i] << endl;
	}
	cout << endl;
}

template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
template<typename T1, typename T2>
void Print(T1 a, T2 b)
{
	cout << a << ", " << b << endl;
}


int main() {
	int arr1[5] = { 10, 20, 30, 40, 50 };
	PrintArray<int, 5>(arr1); // 명시적 호출

	double arr2[3] = { 1.1, 2.2, 3.3 };
	PrintArray<double, 3>(arr2); // 명시적 호출

	/*int n1 = 10, n2 = 20;
	double d1 = 1.1, d2 = 2.2;

	cout << n1 << ", " << n2 << endl;
	Swap(n1, n2);
	cout << n1 << ", " << n2 << endl;
	cout << endl;

	cout << d1 << ", " << d2 << endl;
	Swap(d1, d2);
	cout << d1 << ", " << d2 << endl;*/


	//Print<int>(10, 20); // 타입 명시적 지정
	//Print<const char*>("ABC", "abcde"); 

	//Print(10, 20);
	//Print(0.123, 1.123);
	//Print("ABC", "abcde");



	return 0;
}
/*
함수 템플릿 : template<T> 키워드, 매개변수 타입을 클라이언트가 결정하도록 타입 일반화(T 타입)
함수 템플릿 인스턴스 : 컴파일러가 생성한 함수 정의 코드 Print<const char*>()
다른 타입의 매개변수들을 가질 수 있음

템플릿 매개변수 타입 객체로는 템플릿 함수 정의의 연산이 가능한 객체(인터페이스를 지원하는 객체) 모두 가능

*/