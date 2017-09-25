#include <iostream>
#include <string.h>
#include "order.h"
#include "customer.h"
#include "vendor.h"

using namespace std;

Order::Order(char *date, Customer cust, Vendor vend){
    setCustomer(cust);
    setVendor(vend);
    setDate(date);
}

itemProduct * Order::getItems(){
    return items;
}

itemProduct Order::getItem(int index){
    return items[index];
}

void Order::addItems(itemProduct itemList){
    //items[index++] = itemList;
    items[index++] = itemList;
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

void Order::display(){
    cout << "||\t Customer: " << getCustomer().getName() << "\t\t\t" << endl;
    cout << "||\t Vendor: " << getVendor().getVendorCode() << " - " << getVendor().getName() << "\t\t\t\t" << endl;
    cout << "||\t Endereco: " << getCustomer().getAddress() << "\t\t\t\t" << endl;
    for (int i=0; i<index; i++){
        cout << "||\t Product: " << getItem(i).getProduct().getItemName() << "\t\t\t\t" << endl;
        cout << "||\t  - Quantity: " << getItem(i).getQuantity() << "\t\t\t\t" << endl;
        cout << "||\t Valor total: " << getItem(i).getQuantity() * getItem(i).getProduct().getPrice() << "\t\t\t" << endl;
    }
}
