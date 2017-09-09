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
    void setName(char *name){};

    //getters
    char * getName(){};
    int getId(){};

    //setters
    void setName(){};
    void setId(){};
}

#endif // USER_H
