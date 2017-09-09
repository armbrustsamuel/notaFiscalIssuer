#include <iostream>
#include <string.h>
#include "product.h"

using namespace std;

Product::getItemName(){
    return itemName;
}

Product::getPrice(){
    return price;
}

Product::getQuantity(){
    return quantity;
}

Product::setItemName(char * name){
    strcpy(itemName, name);
}

Product::setPrice(float prce){
    price = prce;
}

Product::setQuantity(int qty){
    quantity = qty;
}
