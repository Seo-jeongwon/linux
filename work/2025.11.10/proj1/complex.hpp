#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(int r, int i);      // 생성자
    Complex& operator++();      // 전위 증가 연산자
    Complex operator--(int);    // 후위 감소 연산자
    void show();                // 출력 함수
};

#endif