#include <iostream>
#include <vector>
using namespace std;

int main() {
    //   int 타입을 저장하는 컨테이너 v를 생성
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (unsigned int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }

    return 0;
}