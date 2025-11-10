#include <iostream>
#include "power.hpp"
using namespace std;

int main() {
Power a(3, 5), b;
a.show();
b.show();
b = 2*a; // 파워 객체와 정수 곱하기
a.show();
b.show();
}
