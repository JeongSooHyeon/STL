#include <iostream>
#include <algorithm>
#include <numeric>
#include <functional>
#include <vector>
using namespace std;

////////////// server ////////////////
// Ŭ���� : ptr_fun()�� �Լ� ��ü Ŭ����, �Ϲ� �Լ��� �Լ� ��ü Ŭ����
// �������� ����� ������ �� �ֽ��ϴ�. argument_type, result_type ��..,
template<typename RType, typename AType>
class Ptr_fun_class :public unary_function<AType, RType> {
	RType(*pf)(AType);	 // �Լ� ������ ��� ����
public:
	Ptr_fun_class(RType(*_pf)(AType)) :pf(_pf) {}
	//RType operator()(AType n) const {
	//	cout << "�Լ� ��ü" << endl;
	//	return pf(n);
	//}
};

// �Ϲ� �Լ��� �Լ� ��ü�� ��ȯ�ϴ� ptr_fun() �Լ�
template<typename RType, typename AType>
Ptr_fun_class<RType, AType> Ptr_fun(RType(*pf)(AType)) {	// �Ϲ� �Լ��� �ּҸ� ���ڷ� ����
	return Ptr_fun_class<RType, AType>(pf);	// �Լ� ��ü ����(����� ���� ����)
}

//////////// client //////////////
bool Pred(int n) {
	return 30 <= n && n <= 40;
}
int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	cout << "30�̻� 40������ ���� ���� : " << count_if(v.begin(), v.end(), Pred) << endl;
	// ����
	cout << "30�̻� 40���ϰ� �ƴ� ���� ���� : " << count_if(v.begin(), v.end(), not1(Ptr_fun(Pred))) << endl;

	return 0;
}