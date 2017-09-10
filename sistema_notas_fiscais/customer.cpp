#include <iostream>
#include <string.h>
#include "customer.h"

using namespace std;

Customer::Customer(char *cpf, char *adr, int id, char *name):
    User(id, name){
        setAddress(adr);
        setCpf(cpf);
}

//Customer::Customer(Customer cust){
//    setAddress(cust.getAddress());
//    setCpf(cust.getCpf());
//    setId(cust.getId());
//    setName(cust.getName());
//}

char * Customer::getAddress(){
    return address;
}

char * Customer::getCpf(){
    return cpf;
}

void Customer::setAddress(char *adr){
    strcpy(address, adr);
}

void Customer::setCpf(char *code){
    strcpy(cpf, code);
}
