#include <iostream>
using namespace std;

struct FuncObject { // �Լ� ��ü : �Լ� ȣ�� ������ ����
public:
	void operator() (int arg) const {
		cout << "���� : " << arg << endl;
	}
	void operator()(int arg1, int arg2) const {
		cout << "���� : " << arg1 << ',' << arg2 << endl;
	}
	void operator()(int arg1, int arg2, int arg3) const {
		cout << "���� : " << arg1 << ',' << arg2 << ',' << arg3 << endl;
	}

};

void Print1(int arg) {
	cout << "���� : " << arg << endl;
}

int main() {
	void (*Print2)(int) = Print1; // �Լ� ������
	FuncObject Print3;

	Print1(10);	// �Լ� �� ����� ���� ���
	Print2(10);	// �Լ� ������ �� ����� ���� ���

	Print3(10); // �Լ� ��ü �� ����� ���� ��� (Print3.operator(10)), ��ü ���� �� ȣ��(�Ͻ���)
	Print3(10, 20);
	Print3(10, 20, 30);
	cout << endl;

	Print3.operator()(10);	// ��ü ���� �� ȣ��(�����)
	Print3.operator()(10, 20);
	Print3.operator()(10, 20, 30);
	cout << endl;

	FuncObject()(10);	// �ӽ� ��ü�� ȣ��(�Ͻ���)
	FuncObject()(10, 20);
	FuncObject()(10, 20, 30);

	FuncObject().operator()(10);	// �ӽ� ��ü�� ȣ��(�����)
	FuncObject().operator()(10, 20);
	FuncObject().operator()(10, 20, 30);

	return 0;
}