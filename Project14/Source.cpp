// section 1 �Լ� �����Ͷ�
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void Print(int n)
{
	cout << "���� : " << n << endl;
}

int main() {
	// ���� 2-2
	// void Print(int n)�� �Լ� ������ ����
	void (*pf)(int);
	// �Լ��� �̸��� �Լ��� ���� �ּ�
	pf = Print;

	Print(10); // 1. �Լ� ȣ��
	pf(10);	   // 2. �����͸� �̿��� �Լ� ȣ��, ù��° ���
	(*pf)(10); // 3. �����͸� �̿��� �Լ� ȣ��, �ι�° ���

	cout << endl;
	cout << Print << endl;
	cout << pf << endl;
	cout << *pf << endl;



	/*���� 2-1
	int n = 10;
	int* pn = &n;*/
	

	return 0;
}
/*
���� : ���� �����ϴ� �޸� ���� �̸�
������ : �ּҸ� �����ϴ� �޸� ���� �̸�
�Լ� ������ : �Լ��� ���� �ּҸ� �����ϴ� ������, �Լ� �ñ״�ó�� ���� ����
�Լ� �ñ״�ó : �Լ��� ��ȯ Ÿ��, �Ű����� ����Ʈ
�Լ� �����Ϳ� �޸� ���� ������(*)�� �ٿ��� �Լ��� �ּ�
�Լ� ȣ�� : pf(), (*pf)()�� ȣ��
*/