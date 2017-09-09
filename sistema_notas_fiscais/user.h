#include <iostream>
#include <string.h>

#ifndef USER_H
#define USER_H

using namespace std;

class User {
protected:
    int id;
    char name[20];
public:
    //constructor
    User(int id, char *name){};

    //getters
    char * getName(){};
    int getId(){};

    //setters
    void setName(char *name){};
    void setId(int id){};
}

#endif // USER_H
