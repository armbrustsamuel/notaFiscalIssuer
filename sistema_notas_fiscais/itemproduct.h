#include <iostream>
#include "product.h"

#ifndef ITEMPRODUCT_H
#define ITEMPRODUCT_H

class itemProduct
{
    Product product;
    int quantity;
public:
    // constructors
    itemProduct();
    itemProduct(Product prod, int qty);

    //setters
    void setProduct(Product prod);
    void setQuantity(int qty);

    //getters
    Product getProduct();
    int getQuantity();

    virtual void display();
};

#endif // ITEMPRODUCT_H
