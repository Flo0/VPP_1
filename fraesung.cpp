#include "fraesung.h"
#define _USE_MATH_DEFINES
#include <math.h>

const double Fraesung::getLength() {
    return this->length;
}

const double Fraesung::getAngle() {
    return this->angle;
}

double const Fraesung::getEndX() {
    return this->length * cos(this->angle - (this->angle > M_PI ? 2 * M_PI : 0));
}

double const Fraesung::getEndY() {
    return this->length * sin(this->angle - (this->angle > M_PI ? 2 * M_PI : 0));
}

Fraesung::~Fraesung() {

}
