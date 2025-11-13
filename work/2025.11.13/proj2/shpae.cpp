#include "shape.hpp"

// Shape 클래스 정의
void Shape::set(int x, int y) {
    this->x = x;
    this->y = y;
}

// Circle 클래스 정의
void Circle::setCircle(int x, int y, int r) {
    set(x, y); // 기본 클래스의 set() 호출
    radius = r;
}

void Circle::show() const {
    cout << "좌표 (" << x << "," << y << ")에 반지름 "
         << radius << "인 원" << endl;
}

// Rect 클래스 정의
void Rect::setRect(int x, int y, int w, int h) {
    set(x, y);
    width = w;
    height = h;
}

void Rect::show() const {
    cout << "좌표 (" << x << "," << y << ")에 폭"
         << width << ", 높이" << height << "인 직사각형" << endl;
}

// Triangle 클래스 정의
void Triangle::setTriangle(int x, int y, int b, int h) {
    set(x, y);
    base = b;
    height = h;
}

void Triangle::show() const {
    cout << "좌표 (" << x << "," << y << ")에 밑변"
         << base << ", 높이" << height << "인 삼각형" << endl;
}