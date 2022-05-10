#ifndef KOMPONENTENLISTE_H
#define KOMPONENTENLISTE_H
#include "komponente.h"


struct KomponentenElement {
    Komponente* k = nullptr;
    KomponentenElement* next = nullptr;
    KomponentenElement* before = nullptr;
};

class KomponentenList
{
private:
    int counter;
    KomponentenElement* first;

    KomponentenElement* const getElement(int pos);

public:
    KomponentenList();

    int const size();

    const Komponente* const at(int pos);

    int erase(int pos);

    void push_back(Komponente* k);

    KomponentenElement* const end();

    KomponentenElement* const begin();

    inline friend ostream& operator<<(ostream& out, const KomponentenList& list);

    ~KomponentenList() {
        KomponentenElement* ptr = first;
        KomponentenElement* del_ptr = nullptr;
        while(ptr != nullptr) {
            del_ptr = ptr;
            ptr = ptr->next;
            delete del_ptr;
        }
    }

};

inline ostream& operator<<(ostream& out, const KomponentenList& list) {
    out << "Ausgabe der Liste" << endl;
    KomponentenElement* ptr = list.first;
    while(ptr != nullptr) {
        ptr->k->output(out);
        out << endl;
        ptr = ptr->next;
    }
    return out;
}

#endif // KOMPONENTENLISTE_H
