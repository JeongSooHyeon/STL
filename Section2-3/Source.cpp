// section 3 Ŭ���̾�Ʈ �ڵ�� ���� �ڵ�
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void Client();

///// ���� /////
// �迭�� ��� ���ҿ� �ݺ����� �۾��� �����ϰ� �߻�ȭ��(��ü���� �۾��� ����)
void For_each(int* begin, int* end, void (*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++); // Ŭ���̾�Ʈ �Լ� ȣ��(�ݹ�)
	}
}

///// Ŭ���̾�Ʈ /////
void Print1(int n)	// ������ �̿��� ���Ҹ� ���
{
	cout << n << ' ';

}

void Print2(int n) // �� ���Ҹ� ������ ���
{
	cout << n*n << " ";
}

void Print3(int n) // ���ڿ��� endl�� �̿��� ���� ���
{
	cout << "���� : " << n << endl;
}

//void Client() // �ݹ� �Լ�
//{
//	cout << "�� client" << endl;
//}

int main() {
	// ���� 2-8
	int arr[5] = {10, 20, 30, 40, 50};

	For_each(arr, arr + 5, Print1); // Print1() �ݹ� �Լ��� �ּҸ� ����
	cout << endl << endl;
	For_each(arr, arr + 5, Print2); // Print2() �ݹ� �Լ��� �ּҸ� ����
	cout << endl << endl;
	For_each(arr, arr + 5, Print3);

	// ���� 2-6, 2-7
	//PrintHello(); // ���� �ڵ� ȣ��


	return 0;
}
/*
call : Ŭ���̾�Ʈ�� ������ ȣ��
callback : ������ Ŭ���̾�Ʈ�� ȣ��

������ Ŭ���̾�Ʈ ������ �����ϴ� ��� : �Լ� ������ �Ű������� �̤ˤ��� �ݹ� �Լ��� �ּҸ� ���� (�Լ� ��ü, �븮��, ���� ���� �� ���)
*/