#include <iostream>
#include <string.h>
#include "vendor.h"

using namespace std;

Vendor::Vendor(char *code, int id, char * name):
    User(id, name){
        setVendorCode(code);
}

Vendor::getVendorCode(){
    return vendorCode;
}

Vendor::setVendorCode(char *code){
    strcpy(vendorCode,code);
}
