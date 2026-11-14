
#include "Point.h"

// Constructeur par defaut
Point::Point() : x(0), y(0) {
}

// Constructeur parametre
Point::Point(double x, double y)
    : x(x), y(y) {
}

// Retourner x
double Point::getX() const {
    return x;
}

// Retourner y
double Point::getY() const {
    return y;
}
