#include <iostream>
#include <string.h>

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer: public User {
private:
    char cpf[9];
    char address[15];
public:
    void setCpf(char *code){};
    void setAddress(char *adr){};
    char * getCpf(){};
    char * getAddress(){};
}

#endif // CUSTOMER_H
