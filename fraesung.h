#ifndef FRAESUNG_H
#define FRAESUNG_H
#include "bohrung.h"


class Fraesung : public Bohrung
{
private:
    double length;
    double angle;
public:
    Fraesung(double x = 0.0, double y = 0.0, double diam = 0.0, double length = 0.0, double angle = 0.0) : Bohrung(x, y, diam) {
        if(length < 0) length = 0;
        if(angle < 0) angle = 0;
        this->length = length;
        this->angle = angle;
    }

    double const getLength();

    double const getAngle();

    double const getEndX();

    double const getEndY();

    inline const void output(ostream& out);

    ~Fraesung();
};

inline  void const Fraesung::output(ostream& out) {
    out << "Fraesung mit Start: ";
    Komponente::output(out);
    out << " und Endpunkt: (" << this->getEndX() << ", " << this->getEndY() << "), Durchmesser: " << this->getDiameter();
}

#endif // FRAESUNG_H
