#include <iostream>
#include <string.h>
#include "product.h"
#include "vendor.h"
#include "customer.h"

#ifndef ORDER_H
#define ORDER_H

class Order {
private:
    Product items[];
    float totPrice;
    char date[8];
    Customer customer;
    Vendor vendor;
public:
    //constructor
    Order(){};

    //getters
    Customer getCustomer(){};
    Vendor getVendor(){};
    char * getDate(){};
    float getTotPrice(){};

    //setters
    void setCustomer(Customer cus){};
    void setVendor(Vendor ven){};
    void setDate(char *dt){};
    void setTotPrice(float tot){};
}

#endif // ORDER_H
