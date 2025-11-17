#include <iostream>
using namespace std;

class Shape {
private:
    int x, y;
public:
    Shape(int x, int y) : x(x), y(y) {
        cout << "Shape 생성" << endl;
    }
    ~Shape() {
        cout << "Shape 소멸" << endl;
    }
    int getX() { return x; }
    int getY() { return y; }
};

class Circle : public Shape {
    int radius;
public:
    Circle(int x, int y, int r) : Shape(x, y), radius(r) {
        cout << "Circle 생성" << endl;
    }
    ~Circle() {
        cout << "Circle 소멸" << endl;
    }
    void show() {
        cout << "좌표 (" << getX() << "," << getY() 
             << ")에 반지름 " << radius << "인 원" << endl;
    }
};

class Rect : public Shape {
    int width, height;
public:
    Rect(int x, int y, int w, int h) : Shape(x, y), width(w), height(h) {
        cout << "Rect 생성" << endl;
    }
    ~Rect() {
        cout << "Rect 소멸" << endl;
    }
    void show() {
        cout << "좌표 (" << getX() << "," << getY() 
             << ")에 폭" << width << ", 높이" << height 
             << "인 직사각형" << endl;
    }
};

class Triangle : public Shape {
    int base, height;
public:
    Triangle(int x, int y, int b, int h) : Shape(x, y), base(b), height(h) {
        cout << "Triangle 생성" << endl;
    }
    ~Triangle() {
        cout << "Triangle 소멸" << endl;
    }
    void show() {
        cout << "좌표 (" << getX() << "," << getY() 
             << ")에 밑변" << base << ", 높이" << height 
             << "인 삼각형" << endl;
    }
};

int main() {
    Circle x(0,0,2);
    Rect y(1,1,5,10);
    Triangle z(2,2,5,10);

    x.show();
    y.show();
    z.show();
}