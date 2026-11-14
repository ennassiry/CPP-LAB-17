
#include "Triangle.h"

// Constructeur par defaut
Triangle::Triangle() {
}

// Constructeur parametre
Triangle::Triangle(Point A, Point B, Point C)
    : AB(A, B), BC(B, C), CA(C, A) {
}

// Calcul du perimetre
double Triangle::perimetre() const {

    return AB.longueur()
         + BC.longueur()
         + CA.longueur();
}
