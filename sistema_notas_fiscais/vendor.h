#include <iostream>
#include <string.h>
#include "user.h"

using namespace std;

#ifndef VENDOR_H
#define VENDOR_H

class Vendor: public User{
private:
    char vendorCode[15];
public:
    //constructor
//    Vendor(Vendor vend);
    Vendor(){};
    Vendor(char *code, int id, char * name);

    //getters
    char * getVendorCode();

    //setters
    void setVendorCode(char * code);
};

#endif // VENDOR_H
