#include <iostream>
#include <string.h>
#include "product.h"
#include "vendor.h"
#include "customer.h"

using namespace std;

#ifndef ORDER_H
#define ORDER_H

class Order{
private:
    int index=0;
    float totPrice;
    char date[8];
    Product items[4];
    Customer customer;
    Vendor vendor;

public:
    //constructor
    Order(){};
    Order(char *date, Customer cust, Vendor vend, Product prod);

    //transactional
    void addItems(Product itemList);
    void addTotalValue(float value);

    //getters
    Customer getCustomer();
    Vendor getVendor();
    char * getDate();
    float getTotPrice();

    //setters
    void setCustomer(Customer cus);
    void setVendor(Vendor ven);
    void setDate(char *dt);
    void setTotPrice(float tot);
};

#endif // ORDER_H
