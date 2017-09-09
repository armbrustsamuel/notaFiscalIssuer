#include <iostream>
#include <string.h>
#include "order.h"

using namespace std;

Order::addItems(Product item){
    strcpy(items, item);
}

Order::addTotalValue(float value){
    totPrice+=value;
}

Order::getCustomer(){
    return customer;
}

Order::getDate(){
    return date;
}

Order::getTotPrice(){
    return totPrice;
}

Order::getVendor(){
    return vendor;
}

Order::setCustomer(Customer cus){
    strcpy(customer, cus);
}

Order::setDate(char *dt){
    strcpy(date, dt);
}

Order::setTotPrice(float tot){
    totPrice = tot;
}

Order::setVendor(Vendor ven){
    strcpy(vendor, ven);
}
