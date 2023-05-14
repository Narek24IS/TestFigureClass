#include "Figure.h"

Figure::Figure(int sides) {
    count++;
    this->sides = sides;
}

Figure::Figure() {
    count++;
    sides = 0;
};

int Figure::getSidesNum() const {
    return sides;
}

void Figure::setSidesNum(int sides) {
    this->sides = sides;
}

unsigned Figure::getCount() const {
    return count;
}


