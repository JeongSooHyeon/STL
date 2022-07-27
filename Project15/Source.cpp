// section 2 �Լ� �������� ����
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void Print(int n)
{
	cout << "���� �Լ� Print()" << n << endl;
}

namespace A
{
	void Print(int n)
	{
		cout << "namespace A ���� �Լ�: " << n << endl;
	}
}

class Point
{
	int x;
	int y;
public:
	explicit Point(int _x = 0, int _y = 0):x(_x),y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
	void PrintInt(int n) { cout << "�׽�Ʈ ���� : " << n << endl; }
};

int main() {
	// ���� 2-5 ��� �Լ� ȣ��
	Point pt(2, 3);
	Point* p = &pt;

	void (Point:: * pf1) () const; // ��� �Լ� ������ ����
	pf1 = &Point::Print;

	void (Point:: * pf2) (int); // ��� �Լ� ������ ����
	pf2 = &Point::PrintInt;

	pt.Print();
	pt.PrintInt(10);
	cout << endl;

	(pt.*pf1) (); // ��ü�� ��� �Լ� Ǥ�͸� �̿��� ȣ��
	(pt.*pf2) (10);
	cout << endl;

	(p->*pf1) (); // �ּҷ� ��� �Լ� �����͸� �̿��� ȣ��
	(p->*pf2) (10); 


	// ���� 2-4 ���� �Լ� ȣ��
	//void (*pf)(int); // ���� �Լ� ������ ����

	//Print(10);       // namespace ���� ���� �Լ� ȣ��
	//A::Print(10);    // namespace A�� ���� �Լ� ȣ��
	//Point::Print(10); // Point Ŭ������ ���� ��� �Լ� ȣ��

	//pf = Print;
	//pf(10);		// �Լ� �����ͷ� namespace ���� ���� �Լ� ȣ��
	//pf = A::Print;
	//pf(10);		// �Լ� �����ͷ� namespace A�� ���� �Լ� ȣ��
	//pf = Point::Print;
	//pf(10);		// �Լ� �����ͷ� Point Ŭ������ ���� ��� �Լ� ȣ��

	// ���� 2-3
	//Point pt;
	//Point* p = &pt;

	//Print(); // ���� �Լ� ȣ��
	//pt.Print(); // ��ü�� ��� �Լ� ȣ��
	//p->Print(); // �ּҷ� ��� �Լ� ȣ��

	return 0;
}
/*
���� �Լ� : ���� �Լ�, namespace ���� ���� �Լ�, static ��� �Լ�
��� �Լ� 
���� �Լ� ȣ��(���� �Լ�)
��ü�� ��� �Լ� ȣ��(��� �Լ�)
��ü�� �ּҷ� ��� �Լ� ȣ��(��� �Լ�)

���� �Լ����� �Լ� ȣ�� �Ծ��� ���Ƽ� �Լ� �����Ͱ� ����

��� �Լ� �����ʹ� �Լ� ������ ���� � Ŭ������ ��� �Լ��� ����ų ������ Ŭ���� �̸� ����
��ü�� ��� �Լ� ȣ�� : .* ������ �̿� (��ü(.*pf)(10))
�ּҷ� ��� �Լ� ȣ�� : ->* ������ �̿� (�ּ�->*pf)(10))

*/