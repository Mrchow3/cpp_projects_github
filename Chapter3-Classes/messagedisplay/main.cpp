#include <iostream>
#include "string.h"
#include "messagedisplay.h"

using namespace std;

int main(){

    MessageDisplay k("Default");

    k.setstring("This is a message.");
    k.display();
    return 0;
}