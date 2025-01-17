#ifndef VOZILO_H
#define VOZILO_H
#include <string>

class Vozilo {
protected:
    std::string registracija;
    int godinaProizvodnje;
    int brojSjedista;
    int snaga;
    bool ispravno;

public:
    // Konstruktor
    Vozilo(std::string registracija, int godinaProizvodnje, int brojSjedista, int snaga,bool ispravno);

    // Getteri i setteri
    std::string getRegistarskiBroj() const;
    void setRegistarskiBroj(const std::string& registracija);

    int getGodinaProizvodnje() const;
    void setGodinaProizvodnje(int godina);

    int getBrojSjedista() const;
    void setBrojSjedista(int brojSjedista);

    int getSnaga() const;
    void setSnaga(int snaga);

    void setIspravno(bool ispravno);
    bool getIspravno() const;

    virtual void ispisi() const;

    virtual ~Vozilo();
};

#endif