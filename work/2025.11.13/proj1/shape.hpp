#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
using namespace std;

class Shape {
private:
    int x, y; // 위치 좌표 (은닉)
public:
    void set(int x, int y); // 좌표 설정
protected:
    int getX() const; // 파생 클래스에서 접근 가능
    int getY() const;
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