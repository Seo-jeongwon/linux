#include "complex.hpp"

// 생성자
Complex::Complex(int r, int i) : real(r), img(i){
    cout << "복소수 " << real << "+" << img << "j 생성" << endl;
}

// 전위 증가 연산자 (++x)
Complex& operator++(Complex &c){
    ++c.real;
    ++c.img;
    return c;
}

// 후위 감소 연산자 (x--)
Complex operator--(Complex &c, int){
    Complex temp = c;
    c.real--;
    c.img--;
    return temp;
}

// 출력 함수
void Complex::show() const{
    cout << real << "+ " << img << "j" << endl;
}