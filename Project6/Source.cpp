// [] ������ �迭 �ε��� ������ �����ε�
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }

	int operator[](int idx) const {
		if (idx == 0)
			return x;
		else if (idx == 1)
			return y;
		else
			throw "�̷� ���� ���� �ž�!";
	}
};

int main() {
	Point pt(1, 2);

	pt.Print();

	cout << pt[0] << ',' // pt.operator[](0)ȣ��
		<< pt[1] << endl; // pt.operator[](1)ȣ��

	return 0;
}
/*
���� ��ü�� ����, �����ϴ� ��ü�� ���
�����̳� ��ü�� �����ϴ� ���� ���� ���� �� ���
*/