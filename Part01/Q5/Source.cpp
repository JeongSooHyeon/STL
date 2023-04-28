#include <iostream>
using namespace std;

class String {
private:
	char* str;
public:
	String(const char* s) {	// �����ڸ� �̿��� Ÿ�� ��ȯ(�ٸ�Ÿ��->�ڽ�)
		str = new char[strlen(s) + 1];
		strcpy_s(str, strlen(s) + 1, s);
	}
	~String() {
		delete[] str;
	}
	const String& operator=(const String& arg) {	// ���� ������
		delete[] str;
		str = new char[strlen(arg.str) + 1];
		strcpy(str, arg.str);

		return *this;
	}
};

int main() {
	const char* sz = "Hello!";
	String s("Hi~!");
	s = sz;
}