#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> score(3, vector<int>(3));
    vector<float> avg(3);
    int best = 0;

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적을 입력: ";
        double sum = 0;
        for (int j = 0; j < 3; j++) {
            cin >> score[i][j];
            sum += score[i][j];
        }
        avg[i] = sum / 3.0;
        if(i!=1)if (avg[i] > avg[best]) best = i;
    }

    cout << "최우수 학생은 " << best + 1
         << "번째 학생이고 평균점수는 "
         << (int)avg[best] << "점이다.\n";

    return 0;
}