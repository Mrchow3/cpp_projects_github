#include <iostream>
#include <cstdlib>

#include "message.h"

using namespace std;

int main(){

    Message m; //object call

    m.sendmessage();
    
    return 0;
}

/*
Note that when creating a make file, the object files are not portable across different systems. For example, Message.o, 
will not be able to be linked on linux. 
*/