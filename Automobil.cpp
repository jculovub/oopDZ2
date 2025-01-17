#include "Automobil.h"
#include <iostream>

Automobil::Automobil(std::string registracija, int godinaProizvodnje, int brojSjedista, int snaga,bool ispravno, std::string tipMotora)
    : Vozilo(registracija, godinaProizvodnje, brojSjedista, snaga,ispravno){
        setTipMotora(tipMotora);
    }

std::string Automobil::getTipMotora() const {
    return tipMotora;
}

void Automobil::setTipMotora(const std::string& tipMotora) {
    this->tipMotora = tipMotora;
}

void Automobil::ispisi() const {
    Vozilo::ispisi(); // Poziva ispis iz klase Vozilos
    std::cout << "Tip motora: " << tipMotora << std::endl;
}
