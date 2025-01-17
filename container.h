#ifndef CONTAINER_H
#define CONTAINER_H

#include <vector>
#include "Vozilo.h"

class Container {
private:
    std::vector<Vozilo*> elements; 

public:
    ~Container();
    void add(Vozilo* element);
    void printAll() const;
};

#endif // CONTAINER_H