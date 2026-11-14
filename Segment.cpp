
#include "Segment.h"
#include <cmath>

// Constructeur par defaut
Segment::Segment() {
}

// Constructeur parametre
Segment::Segment(Point A, Point B)
    : A(A), B(B) {
}

// Calcul de la longueur
double Segment::longueur() const {

    double dx = B.getX() - A.getX();
    double dy = B.getY() - A.getY();

    return sqrt(dx * dx + dy * dy);
}
