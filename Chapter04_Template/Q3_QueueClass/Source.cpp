#include <iostream>
using namespace std;

template<typename T>
class Queue {
private:
	enum {CAP=10};
	T arr[10];
	int front;
	int rear;
public:
	Queue() : front(0), rear(0) {}
	void Push(const T& data) {
		arr[rear=(rear+1)%CAP] = data;
	}
	const T& Pop() {
		return arr[front=(front+1)%CAP];
	}
	bool Empty() const {
		return front == rear;
	}
};
int main() {
	Queue<int> q;

	q.Push(10);
	q.Push(20);
	q.Push(30);

	if (!q.Empty())
		cout << q.Pop() << endl;	// 10
	if (!q.Empty())
		cout << q.Pop() << endl;	// 20
	if (!q.Empty())
		cout << q.Pop() << endl;	// 30

	return 0;
}