#include <iostream>
using namespace std;

class String {
private:
	char* str;
public:
	String(const char* s) {	// 생성자를 이용한 타입 변환(다른타입->자신)
		str = new char[strlen(s) + 1];
		strcpy_s(str, strlen(s) + 1, s);
	}
	~String() {
		delete[] str;
	}
	const String& operator=(const String& arg) {	// 복사 생성자
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