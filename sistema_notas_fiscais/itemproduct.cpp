#include "itemproduct.h"

itemProduct::itemProduct()
{ }

itemProduct::itemProduct(Product prod, int qty){
    setQuantity(qty);
    setProduct(prod);
}

int itemProduct::getQuantity(){
    return quantity;
}

void itemProduct::setQuantity(int qty){
    quantity = qty;
}

Product itemProduct::getProduct(){
    return product;
}

void itemProduct::setProduct(Product prod){
    product = prod;
}

void itemProduct::display(){
    product.display();
    cout << "Product quantity:" << getQuantity() << endl;
}




