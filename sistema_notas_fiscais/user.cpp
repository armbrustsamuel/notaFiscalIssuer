#include <iostream>
#include <string.h>
#include "user.h"

using namespace std;

User::getId(){
    return id;
}

User::getName(){
    return name;
}

User::setId(int code){
    id = code;
}

User::setName(char *nam){
    strcpy(name, nam);
}
