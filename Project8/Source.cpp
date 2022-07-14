// ����Ʈ ������ ������ �����ε�
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
};

class PointPtr
{
	Point* ptr;
public:
	PointPtr(Point* p) :ptr(p) { }
	~PointPtr()
	{
		delete ptr;
	}
	Point* operator->() const
	{
		return ptr;
	}
	Point& operator* () const
	{
		return *ptr;
	}
};

int main() {
	Point* p1 = new Point(2, 3); // �޸� �Ҵ�
	PointPtr p2 = new Point(5, 5);

	 p1->Print(); // p1->Print()
	 p2->Print(); // p2.operator->()->Print()
	 cout << endl;

	 (*p1).Print(); // (*p1).Print()
	 (*p2).Print(); // p2.operator*().Print()

	 delete p1;


	// p1, p2�� �Ҹ��ڿ��� Point ���� ��ü�� �ڵ����� �޸𸮿��� ����

	//Point *p1 = new Point(2, 3); // �޸� �Ҵ�
	//Point* p2 = new Point(5, 5);

	//p1->Print(); // p1�� ��� �Լ� ȣ��
	//p2->Print();

	//delete p1; // �޸� ����
	//delete p2;

	return 0;
}
/*
����Ʈ �����͸� ����� ������ �������� ������ ��ü�� �Ҹ��ڿ��� �ڵ� ����
���α׷� �� ���� �߻� �� delete ȣ���� ���Ծ� �߻��ϴ� ���� �޸� ���� ���� ����

 -> : Ŭ������ ��� ����
 * : �����Ͱ� ����Ű�� ��ü ��ü
*/