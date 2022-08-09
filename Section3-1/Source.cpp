// section 1 �Լ� ��ü��
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//void Print(int a, int b) 
//{
//	cout << "���� �Լ�: " << a << ',' << b << endl;
//}
//
//struct Functor
//{
//	void operator() (int a, int b)
//	{
//		cout << "�Լ� ��ü: " << a << ',' << b << endl;
//	}
//};

class Adder
{
	int total;
public:
	explicit Adder(int n= 0):total(n) { }
	int operator()(int n) // �Ϲ��� �ζ��� �Լ�
	{
		cout << n << "��" << endl;
		return total += n;
	}
};

int main() {
	// ���� 3-3
	Adder add(0); // �ʱ갪 0

	cout << add(10) << endl;
	cout << add(20) << endl;
	cout << add(30) << endl;


	// ���� 3-2
	//Functor functor;

	//Print(10, 20); // ���� �Լ� ȣ��
	//functor(10, 20); // ��� �Լ� ȣ�� functor.operator() (10, 20)�� ����

	return 0;
}
/*
�Լ� ��ü(�Լ��� functor) : �Լ�ó�� �����ϴ� ��ü
��ü�� ()������ ����(�����ε�)

�ٸ� ��� ������ ��� �Լ��� ���� �� �ְ� �Ϲ� �Լ����� ���� ���ϴ� ���� ���� �� �ִ�
�ζ��ε� �� �ְ�, �����Ϸ��� ���� ����ȭ ����
*/