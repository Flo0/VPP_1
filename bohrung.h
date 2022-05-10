#ifndef BOHRUNG_H
#define BOHRUNG_H
#include "komponente.h"

class Bohrung : public Komponente
{
private:
    double diameter;
public:
    Bohrung(double x = 0.0, double y = 0.0, double diam = 6.0) : Komponente(x, y) {
        if(diam < 0) diam = 0.0;
        this->diameter = diam;
    }

    double const getDiameter();

    inline void const output(ostream& out);

    ~Bohrung();
};

inline const void Bohrung::output(ostream& out) {
    out << "Bohrung: ";
    Komponente::output(out);
    out << ", Durchmesser: " << this->diameter;
}

#endif // BOHRUNG_H
