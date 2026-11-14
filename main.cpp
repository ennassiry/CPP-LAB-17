
#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {

    // Creation des trois points
    Point A(0, 0);
    Point B(3, 0);
    Point C(0, 4);

    // Creation du triangle
    Triangle T(A, B, C);

    // Affichage du perimetre
    cout << "Perimetre du triangle : "
         << T.perimetre() << endl;

    return 0;
}
