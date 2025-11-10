#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;
public:
    Complex(int r =0, int i =0);// 생성자
    friend Complex& operator++(Complex &c);// 전위 증가 연산자
    friend Complex operator--(Complex &c, int);// 후위 감소 연산자
    void show() const;// 출력 함수
};

#endif