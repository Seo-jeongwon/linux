#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    vector<int>::iterator it;
    int x;

    cout << "숫자를 입력하세요: ";
    for (int i = 0; i < 5; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "초기 벡터 원소: ";
    for (it = v.begin(); it != v.end(); it++) cout << *it << " ";
    cout << endl;

    for (it = v.begin(); it != v.end(); )
        if (*it < 0) it = v.erase(it);
        else ++it;

    cout << "음수를 삭제 후 벡터원소: ";
    for (it = v.begin(); it != v.end(); it++) cout << *it << " ";
    cout << endl;

    double sum = 0;
    for (it = v.begin(); it != v.end(); it++) sum += *it;

    double avg = (v.empty()) ? 0 : sum / v.size();
    cout << "평균값: " << avg << endl;

    return 0;
}
