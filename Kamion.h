#ifndef KAMION_H
#define KAMION_H

#include "Vozilo.h"

class Kamion : public Vozilo {
private:
    int nosivost; 
    int brojOsovina; 

public:
    
    Kamion(std::string registarskiBroj, int godinaProizvodnje, int brojSjedista, int snaga,bool ispravno, int nosivost, int brojOsovina);

    int getNosivost() const;
    void setNosivost(int nosivost);

    int getBrojOsovina() const;
    void setBrojOsovina(int brojOsovina);


    void ispisi() const override;
};

#endif 
