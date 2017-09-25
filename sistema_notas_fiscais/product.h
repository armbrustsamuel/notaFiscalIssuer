#include <iostream>
#include <string.h>

using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
private:
    int quantity;
    float price;
    string itemName;

public:
    //constructor
    Product(){};
    Product(int qty, float price, string name);

    //getters
    int getQuantity();
    float getPrice();
    string getItemName();

    //setters
    void setQuantity(int qty);
    void setPrice(float prce);
    void setItemName(string name);

    virtual void display();
};
#endif // PRODUCT_H
