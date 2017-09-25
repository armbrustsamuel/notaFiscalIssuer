#include <iostream>
#include <string.h>
#include "customer.h"

using namespace std;

Customer::Customer(int id, string cpf, string adr, string name):
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

string Customer::getAddress(){
    return address;
}

string Customer::getCpf(){
    return cpf;
}

void Customer::setAddress(string adr){
//    strcpy(address, adr);
    address = adr;
}

void Customer::setCpf(string code){
//    strcpy(cpf, code);
    cpf = code;
}

void Customer::display(){
    cout << "Id:" << getId() << endl;
    cout << "Name:" << getName() << endl;
    cout << "CPF:" << getCpf() << endl;
    cout << "Address:" << getAddress() << endl;
}
