#include "komponentenlist.h"

KomponentenList::KomponentenList()
{
    this->counter = 0;
    this->first = nullptr;
}

const int KomponentenList::size() {
    return this->counter;
}

KomponentenElement* const KomponentenList::getElement(int pos) {
    KomponentenElement* ptr = nullptr;

    if(pos < 0 || pos >= this->counter) {
        return ptr;
    }

    int count = 0;
    ptr = this->first;
    while(count < pos && ptr != nullptr) {
        count++;
        ptr = ptr->next;
    }

    return ptr;
}

const Komponente* const KomponentenList::at(int pos) {
    const KomponentenElement* element = this->getElement(pos);
    return element == nullptr ? nullptr : element->k;
}

int KomponentenList::erase(int pos) {
    if(pos < 0 || pos >= this->counter) {
        return -1;
    }

    KomponentenElement* before = getElement(pos - 1);
    KomponentenElement* current = getElement(pos);
    KomponentenElement* next = getElement(pos + 1);

    if(before == nullptr) {
        next->before = nullptr;
        this->first = next;
    } else {
        before->next = next;
    }

    if(next != nullptr) {
        next->before = before;
    }

    this->counter--;

    delete current;

    return this->counter == 0 ? -1 : pos;
}

void KomponentenList::push_back(Komponente* k) {
    KomponentenElement* element = new KomponentenElement();
    element->k = k;
    if(this->counter == 0) {
        this->first = element;
    } else {
        KomponentenElement* last = getElement(counter - 1);
        last->next = element;
        element->before = last;
    }
    this->counter++;
}

KomponentenElement* const KomponentenList::end() {
    return nullptr;
}

KomponentenElement* const KomponentenList::begin() {
    return this->first;
}
