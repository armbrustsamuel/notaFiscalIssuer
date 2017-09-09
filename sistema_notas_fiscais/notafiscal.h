#include <iostream>
#include <string.h>
#include "order.h"

#ifndef NOTAFISCAL_H
#define NOTAFISCAL_H

class NotaFiscal{
private:
    Order sales[];
public:
    //constructor
    NotaFiscal(Order * sales){};

    //transactional
    void Issue(){};

    //getters
    Order * getSales(){};
    //setters
    void addSale(Order sale);
}

#endif // NOTAFISCAL_H
