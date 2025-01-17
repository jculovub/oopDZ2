#include "Kamion.h"
#include <iostream>

Kamion::Kamion(std::string registracija, int godinaProizvodnje, int brojSjedista, int snaga, bool ispravno, int nosivost, int brojOsovina)
    : Vozilo(registracija, godinaProizvodnje, brojSjedista, snaga, ispravno) {
    setNosivost(nosivost); 
    setBrojOsovina(brojOsovina);
}

int Kamion::getNosivost() const {
    return nosivost;
}

void Kamion::setNosivost(int nosivost) {
    this->nosivost = nosivost;
}

int Kamion::getBrojOsovina() const {
    return brojOsovina;
}

void Kamion::setBrojOsovina(int brojOsovina) {
    this->brojOsovina = brojOsovina;
}

void Kamion::ispisi() const {
    Vozilo::ispisi(); 
    std::cout << "Nosivost: " << nosivost << " kg, Broj osovina: " << brojOsovina << std::endl;
}
