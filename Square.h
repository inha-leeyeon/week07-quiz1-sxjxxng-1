#pragma once
#include "Point.h"
#include <iostream>
using namespace std;


class Square : public Point {
public:
    Square(const string n, int px, int py, unsigned int s = 0) :Point(px, py), name(n), side(s) {
        area = side * side;
    }
    unsigned int getSide() const {
        return side;
    }
    unsigned int getArea() const {
        return area;
    }
    string getName() const {
        return name;
    }
    void setSide(unsigned int s) {
        side = s;
        area = side * side;
    }
    void setArea(unsigned int a) {
        area = a;
    }
    void setName(string n) {
        name = n;
    }
private:
    unsigned int side;
    unsigned int area = 0;
    string name;
};

