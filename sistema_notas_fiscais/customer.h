#include <iostream>
#include <string.h>
#include "user.h"

using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer: public User {
private:
    string cpf;
    string address;

public:
    //constructor
    Customer(){};
    Customer(int id, string cpf, string adr, string name);

    //setters
    void setCpf(string code);
    void setAddress(string adr);

    //getters
    string getCpf();
    string getAddress();

    virtual void display();
};

#endif // CUSTOMER_H
