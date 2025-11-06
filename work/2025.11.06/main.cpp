#include "complex.hpp"

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    sum = x + y;
    cout << "두 복소수의 합은 ";
    sum.show();
    return 0;
}