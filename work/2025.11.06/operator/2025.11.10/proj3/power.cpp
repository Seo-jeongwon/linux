#include "power.hpp"

Power::Power() : kick(0), punch(0) {}   // 기본 생성자

Power::Power(int k, int p) : kick(k), punch(p) {} // 매개변수 생성자

//정수 * Power 연산자 오버로딩
Power operator*(int n, const Power &p) {    
    return Power(p.kick * n, p.punch * n);
}

// 출력 함수
void Power::show() const{
    cout << "kick=" << kick << ",punch=" << punch << endl;
}