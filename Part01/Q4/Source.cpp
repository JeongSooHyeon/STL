#include <iostream>

using namespace std;

class String {
private:
	char* str;
public:
	String(const char* s) {
		str = new char[strlen(s) + 1];
		strcpy_s(str, strlen(s) + 1, s);
	}
	operator const char*() const{	// Ÿ�� ��ȯ ������(��->�ٸ�Ÿ��)
		return str;
	}
};

int main() {
	String s("Hello");
	const char* sz = s; // s����ȯ

	return 0;
}