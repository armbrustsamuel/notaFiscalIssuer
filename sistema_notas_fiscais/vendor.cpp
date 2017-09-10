#include <iostream>
#include <string.h>
#include "vendor.h"

using namespace std;

//Vendor::Vendor(Vendor vend):
//    User(vend.getId(),vend.getName()){
//        setId(vend.getId());
//        setName(vend.getName());
//        setVendorCode(vend.getVendorCode());
//}

Vendor::Vendor(char *code, int id, char * name):
    User(id, name){
        setVendorCode(code);
}

char * Vendor::getVendorCode(){
    return vendorCode;
}

void Vendor::setVendorCode(char *code){
    strcpy(vendorCode,code);
}

void Vendor::display(){
    cout << "Id:" << getId() << endl;
    cout << "Name:" << getName() << endl;
    cout << "Vendor code:" << getVendorCode() << endl;
}
