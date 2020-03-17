#include <iostream>
#include "string.h"
#include "messagedisplay.h"
using namespace std;

//set recieves the message and sets the message to the private var and returns the message
//get function call for the secret message
//display displays the message

//declare namespace for functions
//omit the class definition
//do not include non-static variables such as string


MessageDisplay::MessageDisplay(string name){ //constructor
    setstring( name );
}
void MessageDisplay::setstring(string message){ //did not validate input, meaning did not check for REQUIRES clause

    secretmessage = message;
} 
string MessageDisplay::getstring(){
    return secretmessage;
}
void MessageDisplay::display(){
    cout <<"Here is your secret message: " << secretmessage << endl;
}
    