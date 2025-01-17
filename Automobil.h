#ifndef AUTOMOBIL_H
#define AUTOMOBIL_H
#include "Vozilo.h"

class Automobil : public Vozilo {
private:
    std::string tipMotora;

public:
    Automobil(std::string registracija, int godinaProizvodnje, int brojSjedista, int snaga,bool ispravno, std::string tipMotora);

    std::string getTipMotora() const;
    void setTipMotora(const std::string& tipMotora);

    void ispisi() const override;
};

#endif 
