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

Vendor::Vendor(int id, string name, string code):
    User(id, name){
        setVendorCode(code);
}

string Vendor::getVendorCode(){
    return vendorCode;
}

void Vendor::setVendorCode(string code){
    vendorCode = code;
}

void Vendor::display(){
    cout << "Id:" << getId() << endl;
    cout << "Name:" << getName() << endl;
    cout << "Vendor code:" << getVendorCode() << endl;
}
