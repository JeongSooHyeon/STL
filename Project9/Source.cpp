// 1-7 Ÿ�� ��ȯ ������ �����ε�
// explicit
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
};

int main() {
	Point pt;
	pt.Print();

	// pt = 10; // ���� �Ͻ��� ������ ȣ�� �Ұ���
	pt = Point(10); // ������ ȣ��
	pt.Print();

	return 0;
}
/*
explicit �����ڴ� ������ ȣ�⸸ ����

*/