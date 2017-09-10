#include <iostream>
#include <string.h>
#include "notafiscal.h"

using namespace std;

NotaFiscal::NotaFiscal(Order sale){
    sales[index++] = sale;
}

void NotaFiscal::addSale(Order sale){
    sales[index++] = sale;
}

Order * NotaFiscal::getSales(){
    return sales;
}

void NotaFiscal::Issue(){
    //print
    cout << "Nota" << endl;
}
