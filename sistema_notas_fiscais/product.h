#include <iostream>
#include <string.h>

using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
private:
    int quantity;
    float price;
    char itemName[20];

public:
    //constructor
    Product(){};
//    Product(Product *prod);
    Product(int qty, float price, char * name);

    //getters
    int getQuantity();
    float getPrice();
    char * getItemName();

    //setters
    void setQuantity(int qty);
    void setPrice(float prce);
    void setItemName(char * name);
};
#endif // PRODUCT_H
