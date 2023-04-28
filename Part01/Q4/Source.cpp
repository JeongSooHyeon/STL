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
	operator const char*() const{	// 타입 변환 연산자(나->다른타입)
		return str;
	}
};

int main() {
	String s("Hello");
	const char* sz = s; // s형변환

	return 0;
}