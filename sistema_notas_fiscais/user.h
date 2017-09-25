#include <iostream>
#include <string.h>

using namespace std;

#ifndef USER_H
#define USER_H

using namespace std;

class User {
protected:
    int id;
    string name;

public:
    //constructor
    User(){};
    User(int id, string name);

    //getters
    string getName();
    int getId();

    //setters
    void setName(string name);
    void setId(int id);
};

#endif // USER_H
