#include <iostream>
#include <string.h>

#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
private:
    int quantity;
    float price;
    char itemName[20];
public:
    //getters
    int getQuantity(){};
    float getPrice(){};
    char * getItemName(){};

    //setters
    void setQuantity(){};
    void setPrice(){};
    void setItemName(){};
}
#endif // PRODUCT_H
