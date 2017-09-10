#include <iostream>
#include <string.h>
#include "order.h"
#include "customer.h"
#include "vendor.h"

using namespace std;

Order::Order(char *date, Customer cust, Vendor vend, Product prod){
    setCustomer(cust);
    setVendor(vend);
    setDate(date);
    addItems(prod);
}

void Order::addItems(Product itemList){
    //items[index++] = itemList;
}

void Order::addTotalValue(float value){
    totPrice+=value;
}

Customer Order::getCustomer(){
    return customer;
}

Vendor Order::getVendor(){
    return vendor;
}

char * Order::getDate(){
    return date;
}

float Order::getTotPrice(){
    return totPrice;
}

void Order::setCustomer(Customer cus){
    customer = cus;
}

void Order::setVendor(Vendor ven){
    vendor = ven;
}

void Order::setDate(char *dt){
    strcpy(date, dt);
}

void Order::setTotPrice(float tot){
    totPrice = tot;
}
