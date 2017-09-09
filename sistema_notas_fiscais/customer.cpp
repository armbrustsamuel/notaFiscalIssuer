#include <iostream>
#include <string.h>
#include "customer.h"

using namespace std;

Customer::Customer(char *cpf, char *adr, int id, char *name):
    User(id, name){
        setAddress(adr);
        setCpf(cpf);
}

Customer::getAddress(){
    return address;
}

Customer::getCpf(){
    return cpf;
}

Customer::setAddress(char *adr){
    strcpy(address, adr);
}

Customer::setCpf(char *code){
    strcpy(cpf, code);
}
