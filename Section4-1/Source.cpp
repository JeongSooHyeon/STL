// section 2 �Լ� ���ø�
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
	PrintArray<int, 5>(arr1); // ����� ȣ��

	double arr2[3] = { 1.1, 2.2, 3.3 };
	PrintArray<double, 3>(arr2); // ����� ȣ��

	/*int n1 = 10, n2 = 20;
	double d1 = 1.1, d2 = 2.2;

	cout << n1 << ", " << n2 << endl;
	Swap(n1, n2);
	cout << n1 << ", " << n2 << endl;
	cout << endl;

	cout << d1 << ", " << d2 << endl;
	Swap(d1, d2);
	cout << d1 << ", " << d2 << endl;*/


	//Print<int>(10, 20); // Ÿ�� ����� ����
	//Print<const char*>("ABC", "abcde"); 

	//Print(10, 20);
	//Print(0.123, 1.123);
	//Print("ABC", "abcde");



	return 0;
}
/*
�Լ� ���ø� : template<T> Ű����, �Ű����� Ÿ���� Ŭ���̾�Ʈ�� �����ϵ��� Ÿ�� �Ϲ�ȭ(T Ÿ��)
�Լ� ���ø� �ν��Ͻ� : �����Ϸ��� ������ �Լ� ���� �ڵ� Print<const char*>()
�ٸ� Ÿ���� �Ű��������� ���� �� ����

���ø� �Ű����� Ÿ�� ��ü�δ� ���ø� �Լ� ������ ������ ������ ��ü(�������̽��� �����ϴ� ��ü) ��� ����

*/