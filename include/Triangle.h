
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Segment.h"

class Triangle {
private:
    Segment AB;
    Segment BC;
    Segment CA;

public:
    // Constructeur par defaut
    Triangle();

    // Constructeur parametre avec trois points
    Triangle(Point A, Point B, Point C);

    // Calculer le perimetre
    double perimetre() const;
};

#endif
