#include "complex.hpp"

// 생성자
Complex::Complex(double r, double i) {
    real = r;
    img = i;
}

// + 연산자 중복
Complex Complex::operator+(const Complex& other) {
    Complex temp;
    temp.real = real + other.real;
    temp.img = img + other.img;
    return temp;
}

// 출력 함수
void Complex::show() {
    if (img >= 0)
        cout << real << "+" << img << "j" << endl;
    else
        cout << real << img << "j" << endl;  // img가 음수면 - 표시
}