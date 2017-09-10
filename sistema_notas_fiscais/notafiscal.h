#include <iostream>
#include <string.h>
#include "order.h"

#ifndef NOTAFISCAL_H
#define NOTAFISCAL_H

class NotaFiscal{
private:
    int index=0;
    Order sales[10];
public:
    //constructor
    NotaFiscal();
    NotaFiscal(Order sales);

    //transactional
    void Issue();

    //getters
    Order * getSales();
    //setters
    void addSale(Order sale);
};

#endif // NOTAFISCAL_H
