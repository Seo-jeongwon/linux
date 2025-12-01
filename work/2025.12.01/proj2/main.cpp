#include <iostream>
using namespace std;

int main() {
    int score[3][3];
    float avg[3];

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";
        cin >> score[i][0] >> score[i][1] >> score[i][2];
        avg[i] = (score[i][0] + score[i][1] + score[i][2]) / 3.0;
    }

    int best = 0;
    for (int i = 1; i < 3; i++) {
        if (avg[i] > avg[best]) best = i;
    }

    cout << "최우수 학생은 " << best + 1
        << "번째 학생이고 평균점수는 "
        << (int)avg[best] << "점이다.\n";

    return 0;
}