#include <iostream>
#include <string.h>
#include "product.h"

using namespace std;

Product::Product(int qty, float price, string name){
    setItemName(name);
    setPrice(price);
    setQuantity(qty);
}

//Product::Product(Product *prod){
//    setItemName(prod->getItemName());
//    setPrice(prod->getPrice());
//    setQuantity(prod->getQuantity());
//}

string Product::getItemName(){
    return itemName;
}

float Product::getPrice(){
    return price;
}

int Product::getQuantity(){
    return quantity;
}

void Product::setItemName(string name){
//    strcpy(itemName, name);
    itemName = name;
}

void Product::setPrice(float prce){
    price = prce;
}

void Product::setQuantity(int qty){
    quantity = qty;
}

void Product::display(){
    cout << "Product name:" << getItemName()<< endl;
    cout << "Product price:" << getPrice()<< endl;
    cout << "Product quantity:" << getQuantity() << endl;
}
