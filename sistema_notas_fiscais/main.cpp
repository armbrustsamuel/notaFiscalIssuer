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
    char date[8];

    cout << "Digite CPF:" << endl;
    cin >> cpf;
    cout << "Digite Enrereco:" << endl;
    cin >> address;
    cout << "Digite o cliente:" << endl;
    cin >> customer;
    cout << "Digite nome de sua empresa:" << endl;
    cin >> vendor;
    cout << "Digite codigo de sua empresa:" << endl;
    cin >> code;
    cout << "Digite nome do produto:" << endl;
    cin >> productName;
    cout << "Digite data de emissao:" << endl;
    cin >> date;

    Customer cust(3, cpf, address, customer);
    Vendor vend(code, 5, vendor);
    Product prod1(30, 1456.65, productName);

    Order ord1(date,cust,vend,prod1);

    ord1.addItems(prod1);

    cust.display();

    cout << "test" << endl;

    return 0;

}
