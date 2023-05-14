#ifndef TESTFIGURECLASS_TRIANGLE_H
#define TESTFIGURECLASS_TRIANGLE_H

#include "Figure.h"
class Triangle : public Figure {
public:
    Triangle(int s1, int s2, int s3);
    Triangle();

    vector<int> getSides() const override;

    int getSide(int sideNum) const override;

    int getPerimeter() const override;

    double getArea() const override;

    Triangle operator+(const Triangle &triangle) const{
        return {this->a + triangle.getSide(1),
                        this->b + triangle.getSide(2),
                        this->c + triangle.getSide(3)};
    }

    bool operator<(const Triangle &triangle) const {
        return (this->getPerimeter() < triangle.getPerimeter());
    }

    bool operator>(const Triangle &triangle) const {
        return (this->getArea() > triangle.getArea());
    }

    Triangle &operator=(const Triangle &triangle) {
        this->a = triangle.a;
        this->b = triangle.b;
        this->c = triangle.c;

        return *this;
    }

    int operator[](int sideNum) const {
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

    friend ostream &operator<<(ostream &stream, Triangle &triangle);

private:
    int a;
    int b;
    int c;
};


#endif //TESTFIGURECLASS_TRIANGLE_H
