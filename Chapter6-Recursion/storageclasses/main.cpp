#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>

#include "external.h"

//using namespace std;

//storage classes auto, register, extern, mutable, and static

/*
auto:
    Automatic storage class only for use inside of scopes or functions. 
    Defined as the default storage class so it is rarely used.

register:
    Storage class in which the specified variable is stored inside of a register instead of RAM.

static:
    Storage class in which a variable stays active throughout the entire program.
    Allows variables to keep value from previous function call.

extern:
    Extern is a reference to an already defined global variable in another file.
    Essentially declares the variable and tells a file to look for the variable that's already defined.
    Cannot be redefined or reinitialized.

mutable:
    Allows an variable from a constant defined class to be mutable. Cannot be declared to const or static variables.
*/



void staticVariables(){
    
    static int staticvariable = 5;
    staticvariable +=5;
    std::cout << "Value of staticvariable: " << staticvariable << std::endl;
    

}//staticVariable

int main(){
    
    int variableExtern; //accessing variable from external.h 
    std::cout << "Accessing global variable: variableExtern: " << variableExtern << std::endl;

    const TestClass k; //creating a constant object from TestClass
    std::cout << "Adding one to mutable variable in a const class " << k.variableMutable + 1 << std::endl;
    

    for(int i = 0; i < 3; ++i){
        staticVariables(); //function call perserves previous value
    }
    return 0;
}

