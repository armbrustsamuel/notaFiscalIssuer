#include <iostream>
#include <string.h>
#include "product.h"

using namespace std;

Product::Product(int qty, float price, char *name){
    setItemName(name);
    setPrice(price);
    setQuantity(qty);
}

//Product::Product(Product *prod){
//    setItemName(prod->getItemName());
//    setPrice(prod->getPrice());
//    setQuantity(prod->getQuantity());
//}

char * Product::getItemName(){
    return itemName;
}

float Product::getPrice(){
    return price;
}

int Product::getQuantity(){
    return quantity;
}

void Product::setItemName(char * name){
    strcpy(itemName, name);
}

void Product::setPrice(float prce){
    price = prce;
}

void Product::setQuantity(int qty){
    quantity = qty;
}
