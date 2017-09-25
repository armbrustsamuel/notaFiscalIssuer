#include <iostream>
#include <string.h>
#include "user.h"

using namespace std;

#ifndef VENDOR_H
#define VENDOR_H

class Vendor: public User{
private:
    string vendorCode;
public:
    //constructor
//    Vendor(Vendor vend);
    Vendor(){};
    Vendor(int id, string name, string code);

    //getters
    string getVendorCode();

    //setters
    void setVendorCode(string code);

    virtual void display();
};

#endif // VENDOR_H
