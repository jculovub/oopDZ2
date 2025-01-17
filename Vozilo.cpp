#include "Vozilo.h"
#include <iostream>

Vozilo::Vozilo(std::string registracija, int godinaProizvodnje, int brojSjedista, int snaga, bool ispravno){
    setRegistarskiBroj(registracija);
    setGodinaProizvodnje(godinaProizvodnje);
    setBrojSjedista(brojSjedista);
    setSnaga(snaga);
    setIspravno(ispravno);
}

std::string Vozilo::getRegistarskiBroj() const {
    return registracija;
}

void Vozilo::setRegistarskiBroj(const std::string& registracija) {
    this->registracija = registracija;
}

int Vozilo::getGodinaProizvodnje() const {
    return godinaProizvodnje;
}

void Vozilo::setGodinaProizvodnje(int godina) {
    this->godinaProizvodnje = godina;
}

int Vozilo::getBrojSjedista() const {
    return brojSjedista;
}

void Vozilo::setBrojSjedista(int brojSjedista) {
    this->brojSjedista = brojSjedista;
}

int Vozilo::getSnaga() const {
    return snaga;
}

void Vozilo::setSnaga(int snaga) {
    this->snaga = snaga;
}

bool Vozilo::getIspravno() const {
    return ispravno;
}

void Vozilo::setIspravno(bool ispravno) {
    this->ispravno = ispravno;
}

void Vozilo::ispisi() const {
    std::cout << "Vozilo, Registarski broj: " << registracija<< ", Godina proizvodnje: " << godinaProizvodnje<< ", Broj sjedista: " << brojSjedista<< ", Snaga: " << snaga << " KS ";
    if(ispravno)std::cout<<",vozilo je ispravno"<<std::endl;
    else std::cout<<",vozilo nije ispravno"<<std::endl;
    
}   

Vozilo::~Vozilo() = default;
