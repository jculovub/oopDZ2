#include <iostream>
#include "Vozilo.h"
#include "Kamion.h"
#include "Automobil.h"
#include "container.h"


int main() {

    Kamion* kamion1 = new Kamion("ZG1234AB", 2018, 2, 400,true, 12000, 4);
    Automobil* auto1 = new Automobil("ZG9876EF", 2021, 4, 200, true,"dizel");

    Container kontenjer;
    //kontenjer.add(kamion1);
    //kontenjer.add(auto1);
    kontenjer.add(new Kamion("ZG1235AB", 2020, 2, 400,true, 120, 2));
    kontenjer.add(new Automobil("ZG9876EF", 2021, 4, 200, true,"dizel"));
    kontenjer.printAll();


    delete kamion1;
    delete auto1;

    return 0;
}
