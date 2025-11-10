#ifndef POWER_HPP
#define POWER_HPP

#include<iostream>
using namespace std;

class Power {
private:
    int kick;
    int punch; 
public:
    Power();    // 기본 생성자
    Power(int k, int p);    // 매개변수 생성자
    friend Power operator*(int n, const Power &p);  // 정수 * Power 연산자 오버로딩
    void show() const;  // 출력 함수
};

#endif