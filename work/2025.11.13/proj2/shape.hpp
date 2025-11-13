#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
using namespace std;

class Shape {
protected:
    int x, y; // 이제 protected → 파생 클래스에서 직접 접근 가능
public:
    void set(int x, int y);
};

// Circle 클래스
class Circle : public Shape {
private:
    int radius;
public:
    void setCircle(int x, int y, int r);
    void show() const;
};

// Rect 클래스
class Rect : public Shape {
private:
    int width, height;
public:
    void setRect(int x, int y, int w, int h);
    void show() const;
};

// Triangle 클래스
class Triangle : public Shape {
private:
    int base, height;
public:
    void setTriangle(int x, int y, int b, int h);
    void show() const;
};

#endif