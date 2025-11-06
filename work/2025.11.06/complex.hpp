#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
private:
    double real;  // 실수부
    double img;   // 허수부

public:
    Complex(double r = 0, double i = 0);        // 생성자
    Complex operator+(const Complex& other);    // + 연산자 중복
    void show();                                // 출력 함수
};

#endif