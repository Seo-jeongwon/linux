#include "complex.hpp"

// 생성자
Complex::Complex(int r, int i) : real(r), img(i) {
    cout << "복소수 " << real << "+ " << img << "j 생성" << endl;
}

// 전위 증가 연산자 (++x)
Complex& Complex::operator++() {
    ++real;
    ++img;
    return *this;
}

// 후위 감소 연산자 (x--)
Complex Complex::operator--(int) {
    Complex temp = *this; // 현재 상태 저장
    real--;
    img--;
    return temp;
}

// 출력 함수
void Complex::show() {
    cout << real << "+ " << img << "j" << endl;
}