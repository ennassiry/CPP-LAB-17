
#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"

class Segment {
private:
    Point A;
    Point B;

public:
    // Constructeur par defaut
    Segment();

    // Constructeur parametre
    Segment(Point A, Point B);

    // Calculer la longueur du segment
    double longueur() const;
};

#endif
