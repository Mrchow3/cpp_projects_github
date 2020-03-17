#include <iostream>
#include <iomanip>


/*
Passing by value means that a copy of a variable is fed as an argument.
As a result, the original input is not changed.
*/
int passByValue(int y){
    y += 5;
    return y;
}

/*
Passing by reference means that the function has direct access to the argument.
As a result, the original input is directly changed.
Reference variables are become another way to express one variable.
*/
int passByReference(int &y){ //y is a reference to x (the input) 
    y+=15;
    return y;
}

int main(){

    int x = 5;

    //passing by value
    passByValue(x);
    std::cout << "Value of x after passByValue call: " << x << std::endl; //stays the same
    std::cout << "Value of passByValue(x): " << passByValue(x) << std::endl; //y destroyed after function call

    //passing by reference
    int k = passByReference(x);
    std::cout << "Value of x after passByReference call: " << x << std::endl; //x itself changes
    std::cout << "Value of passByReference(x): " << k << std::endl;

    //passing by reference in main
    int z = 10;
    int &y = z; // y is now an alias of z and functions as a reference

    return 0;
}
