#include <iostream>
#include <string.h>
#include "user.h"

using namespace std;

User::User(int id, string name){
    setId(id);
    setName(name);
}

int User::getId(){
    return id;
}

string User::getName(){
    return name;
}

void User::setId(int code){
    id = code;
}

void User::setName(string nam){
    //strcpy(name, nam);
    name = nam;
}
