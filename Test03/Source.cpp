// ¤�� �Ѿ��
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <functional> // less<> ���, greater<>, plus<>, minus<>
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
		cout << "����!" << endl;
	else
		cout << "�ٸ���!" << endl;

	return 0;
}
/*
less : < ������ �Լ� ��ü
greater : > ������ �Լ� ��ü
bool���� ��ȯ�ϴ� ������
*/