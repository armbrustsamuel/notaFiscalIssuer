#include <iostream>
#include <string.h>
#include "user.h"

using namespace std;

User::User(int id, char *name){
    setId(id);
    setName(name);
}

int User::getId(){
    return id;
}

char * User::getName(){
    return name;
}

void User::setId(int code){
    id = code;
}

void User::setName(char *nam){
    strcpy(name, nam);
}
