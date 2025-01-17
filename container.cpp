#include "Container.h"
#include <iostream>

Container::~Container() {
    // Oslobađanje memorije za objekte u kontejneru
    for (Vozilo* element : elements) {
        delete element;
    }
}

void Container::add(Vozilo* element) {
    elements.push_back(element);
}

void Container::printAll() const {
    for (const Vozilo* element : elements) {
        element->ispisi(); // poziv metode ovisno o tipu
    }
}
