#include "main.h"

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    char cpf[15];
    char address[15];
    char customer[15];
    char vendor[15];
    char code[14];
    char productName[15];
    char date[8];

    cout << "Digite CPF:" << endl;
    cin >> cpf;
    cout << "Digite Enrereço:" << endl;
    cin >> address;
    cout << "Digite o cliente:" << endl;
    cin >> customer;
    cout << "Digite nome de sua empresa:" << endl;
    cin >> vendor;
    cout << "Digite codigo de sua empresa:" << endl;
    cin >> code;
    cout << "Digite data de emissão:" << endl;
    cin >> date;

    // Create some products
    Product sushi(50, 1.54, "Sushi");
    Product carne(100, 45.23, "Carne");
    Product acogg50(3000, 4.5, "Aco GG 50");

    // Create qty of products
    itemProduct it1(sushi,4);
    itemProduct it2(carne,3);
    itemProduct it3(acogg50, 60);

    // Create Vendor and Customer
    Customer cust(3, cpf, address, customer);
    Vendor vend(code, 5, vendor);

    // Create the order
    Order ord1(date,cust,vend);
    ord1.addItems(it1);
    ord1.addItems(it2);
    ord1.addItems(it3);

    // Create the Nota Fiscal
    //ord1.display();
    NotaFiscal nf01(ord1);
    nf01.display();

    return 0;
}
