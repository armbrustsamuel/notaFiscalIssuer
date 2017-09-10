#include <iostream>
#include <string.h>
#include "notafiscal.h"
#include "product.h"
#include "vendor.h"
#include "customer.h"
#include "order.h"

using namespace std;

int main()
{
    char cpf[15];
    char address[15];
    char customer[15];
    char vendor[15];
    char code[14];
    char productName[15];

    cin >> cpf;
    cin >> address;
    cin >> customer;
    cin >> vendor;
    cin >> code;
    cin >> productName;

    Customer cust(3, cpf, address, customer);
//    Vendor vend(code, 5, vendor);
//    Product prod1(30, 1456.65, productName);

    //Order ord1("09092017");

    //ord1.addItems(&prod1);

    cout << "test" << endl;

    return 0;

}
