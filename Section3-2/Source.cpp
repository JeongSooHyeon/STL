// section 2 �Լ� ��ü ����
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <functional> // less<> ���, greater<>, plus<>, minus<>
using namespace std;

typedef less<int> Less; // ���ø� �ݷ����� ª�� ���� �̸��� ����ϱ� ����

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
	cout << l(10, 20) << endl; // l ��ü�� �Ϲ��� �Լ� ȣ��
	cout << l(20, 10) << endl;
	cout << Less()(10, 20) << endl; // �ӽ� ��ü�� �Ϲ��� �Լ� ȣ��
	cout << Less()(20, 10) << endl;
	cout << Greater()(10, 20) << endl; // ����� Greater ���
	cout << Greater()(20, 10) << endl;
	cout << endl;
	cout << l.operator()(10, 20) << endl; // ����� ȣ��
	cout << Less().operator()(10, 20) << endl;
	cout << less<int>()(10, 20) << endl; // STL�� less, greater ���
	cout << less<int>()(20, 10) << endl;
	cout << greater<int>()(10, 20) << endl;
	cout << greater<int>()(20, 10) << endl;


	return 0;
}
/*
less : < ������ �Լ� ��ü
greater : > ������ �Լ� ��ü
bool���� ��ȯ�ϴ� ������
*/