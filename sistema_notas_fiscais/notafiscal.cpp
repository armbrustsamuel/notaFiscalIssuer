#include <iostream>
#include <string.h>
#include "notafiscal.h"

using namespace std;

NotaFiscal::NotaFiscal(Order newSale){
    sale = newSale;
}

void NotaFiscal::addSale(Order newSale){
    sale = newSale;
}

Order NotaFiscal::getSales(){
    return sale;
}

void NotaFiscal::Issue(){
    display();
}

void NotaFiscal::display(){
    cout << "||\t ***** \t ***** \t ***** \t ***** \t ***** \t||" << endl;
    cout << "||\t ***** \t ***** Nota Fiscal ***** \t ***** \t||" << endl;
    cout << "||\t ***** \t ***** \t ***** \t ***** \t ***** \t||" << endl;
    cout << "||\tData Emissão: " << getSales().getDate() << "\t\t\t\t||" << endl;

    sale.display();

    cout << "||\t ***** \t ***** \t ***** \t ***** \t ***** \t||" << endl;
    cout << "||\t ***** \t ***** Modelo 55 ***** \t ***** \t||" << endl;
    cout << "||\t ***** \t ***** \t ***** \t ***** \t ***** \t||" << endl;

}
