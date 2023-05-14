#include <iostream>
#include "Triangle.h"

int main() {
    Triangle t1{5, 8, 5};
    Triangle t2{8, 8, 8};
    Triangle t3 = t1 + t2;
    cout << "First triangle:" << endl << "a = " << t1.getSide(1) << "\t"
         << "b = " << t1.getSide(2) << "\t"
         << "c = " << t1.getSide(3) << "\t" << "Area: " << t1.getArea() << endl;
    cout << "Second triangle:" << endl << "a = " << t2[1] << "\t"
         << "b = " << t2[2] << "\t"
         << "c = " << t2[3] << "\t" << "Area: " << t1.getArea() << endl;
    cout << "Third triangle:" << endl << t3 << " Area: " << t3.getArea() << endl;
    bool fact = t3 > t1;
    if (fact) {
        cout << "Third triangle > First triangle";
    } else {
        cout << "False";
    }
}