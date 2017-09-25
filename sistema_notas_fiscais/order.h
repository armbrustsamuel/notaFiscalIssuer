#include <iostream>
#include <string.h>
#include "itemProduct.h"
#include "vendor.h"
#include "customer.h"

using namespace std;

#ifndef ORDER_H
#define ORDER_H

class Order{
private:
    int index=0;
    float totPrice;
    string date;
    itemProduct items[10];
    Customer customer;
    Vendor vendor;

public:
    //constructor
    Order(){};
    Order(string date, Customer cust, Vendor vend);

    //transactional
    void addItems(itemProduct itemList);
    void addTotalValue(float value);

    //getters
    itemProduct * getItems();
    itemProduct getItem(int index);
    Customer getCustomer();
    Vendor getVendor();
    string getDate();
    float getTotPrice();

    //setters
    void setCustomer(Customer cus);
    void setVendor(Vendor ven);
    void setDate(string dt);
    void setTotPrice(float tot);

    virtual void display();
};

#endif // ORDER_H
