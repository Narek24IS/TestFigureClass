#ifndef TEST_FIGURE_H
#define TEST_FIGURE_H


#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Figure {
public:
    explicit Figure(int sides);

    Figure();

    virtual vector<int> getSides() const = 0;

    virtual int getSide(int sideNum) const = 0;

    virtual int getPerimeter() const = 0;

    virtual double getArea() const = 0;

    int getSidesNum() const;

    unsigned getCount() const;

    void setSidesNum(int sides);

private:
    int sides;
    inline static unsigned count{};
};


#endif
