#include <QCoreApplication>
#include <iostream>
#include "komponentenlist.h"
#include "bohrung.h"
#include "fraesung.h"
#include <math.h>

int main(int argc, char *argv[])
{


    KomponentenList* list = new KomponentenList();
    list->push_back(new Bohrung(1, 1, 1));
    list->push_back(new Fraesung(1, 1, 1, 3, 0.2));
    list->push_back(new Bohrung(1, 2, 1));
    list->push_back(new Fraesung(1, 2, 1, 3, 0.2));
    list->push_back(new Bohrung(1, 3, 1));
    list->push_back(new Fraesung(1, 3, 1, 3, 0.2));

    (new Fraesung(1, 3, 1, 3, 0.99 * M_PI))->output(cout);
    cout << endl;

    cout << *list;

    delete list;

    return 0;
}
