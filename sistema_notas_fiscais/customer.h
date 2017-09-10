#include <iostream>
#include <string.h>
#include "user.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer: public User {
private:
    char cpf[9];
    char address[15];
public:
    //constructor
    Customer();
    Customer(Customer *cust);
    Customer(char * cpf, char * adr, int id, char * name);

    //setters
    void setCpf(char *code);
    void setAddress(char *adr);

    //getters
    char * getCpf();
    char * getAddress();
};

#endif // CUSTOMER_H
