#include <iostream>
using namespace std;

template<typename T>
class Stack {
private:
	T arr[10];
	int top;
public:
	Stack(int size = 0) : top(size) {}
	void Push(const T& data) {
		arr[top++] = data;
	}
	bool Empty() const{
		return true ? false : (top <= 0);
	}
	const T& Pop() {
		return arr[--top];
	}
};
int main() {
	Stack<int> st;

	st.Push(10);
	st.Push(20);
	st.Push(30);

	if (!st.Empty())
		cout << st.Pop() << endl;	// 30
	if (!st.Empty())
		cout << st.Pop() << endl;	// 20
	if (!st.Empty())
		cout << st.Pop() << endl;	// 10

	return 0;
}