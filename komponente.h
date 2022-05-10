#ifndef KOMPONENTE_H
#define KOMPONENTE_H

#include <iostream>

using namespace std;

class Komponente
{
private:
    double x;
    double y;

public:
    Komponente(double xPos = 0.0, double yPos = 0.0) {
        this->x = xPos;
        this->y = yPos;
    }

    double const getX();

    double const getY();

    inline void const output(ostream& out);

    ~Komponente();
};

inline void const Komponente::output(ostream& out) {
    out << "(" << this->x << ", " << this->y << ")";
}
#endif // KOMPONENTE_H
