#include <iostream>
#include <string.h>
#include "user.h"

using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer: public User {
private:
    char cpf[9];
    char address[15];

public:
    //constructor
    Customer(){};
    Customer(int id, char *cpf, char *adr, char *name);

    //setters
    void setCpf(char *code);
    void setAddress(char *adr);

    //getters
    char * getCpf();
    char * getAddress();

    virtual void display();
};

#endif // CUSTOMER_H
