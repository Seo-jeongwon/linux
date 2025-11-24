#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v; // 정수 벡터 생성
    int x;
    cout<<("정수 4개를 입력하시오: ");
    for(int i=0;i<4;i++){
        cin>>x;
        v.push_back(x);
    }

    int max = v[0];
    int min = v[0];

    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
    }

    cout << "최대값은 " << max << ", 최소값은 " << min << "입니다." << endl;
}