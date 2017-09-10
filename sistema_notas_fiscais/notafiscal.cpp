#include <iostream>
#include <string.h>
#include "notafiscal.h"
#include "order.h"

using namespace std;

void NotaFiscal::addSale(Order sale){
    sales[index++] = sale;
}

Order * NotaFiscal::getSales(){
    return sales;
}

void NotaFiscal::Issue(){
    //print

}

NotaFiscal::NotaFiscal(Order sale){
    sales[index++] = sale;
}
