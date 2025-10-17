#pragma once
#include <iostream>
using namespace std;


class Point {
public:
    Point(int px = 0, int py = 0) :x(px), y(py) {}
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int px) { x = px; }
    void setY(int py) { y = py; }
private:
    int x;
    int y;
};