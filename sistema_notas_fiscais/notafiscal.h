#include <iostream>
#include <string.h>
#include "order.h"

using namespace std;

#ifndef NOTAFISCAL_H
#define NOTAFISCAL_H

class NotaFiscal{
private:
    int index=0;
    Order sale;

public:
    //constructor
    NotaFiscal(){};
    NotaFiscal(Order sales);

    //transactional
    void Issue();

    //getters
    Order getSales();
    //setters
    void addSale(Order sale);

    virtual void display();
};

#endif // NOTAFISCAL_H
