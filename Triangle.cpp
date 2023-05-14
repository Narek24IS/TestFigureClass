#include "Triangle.h"

Triangle::Triangle(int s1, int s2, int s3) : Figure(3) {
    this->a = s1;
    this->b = s2;
    this->c = s3;
}

Triangle::Triangle() : Figure(3) {
    this->a = 0;
    this->b = 0;
    this->c = 0;
}

vector<int> Triangle::getSides() const {
    return vector<int>{a, b, c};
}

int Triangle::getSide(int sideNum) const {
    switch (sideNum) {
        case 1:
            return a;
            break;
        case 2:
            return b;
            break;
        case 3:
            return c;
            break;
        default:
            cout << "There is no such side!";
            return -1;
            break;
    }
}

int Triangle::getPerimeter() const {
    return a + b + c;
}

double Triangle::getArea() const {
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    return round(S);
}

ostream &operator<<(ostream &stream, Triangle &triangle) {
    stream << "a = " << triangle.a << "\t";
    stream << "b = " << triangle.b << "\t";
    stream << "c = " << triangle.c << "\t";

    return stream;
}

