#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

/*
Pointers contain memory address as their values. Instead of returning a value,
a pointer will return a memory address of a variable.
Pointers indirectly reference a value, thus us called indirection.
*/


int main(){
    //countOne is a pointer to an int value
    int *countOne = 0;  //pointers should be initialized to zero or null
                        //if not zero, need to be converted to pointer type
    std::printf("Value of countOne: %p \n", countOne);

    int x = 22; 

    countOne = &x; //assigns the memory address to x and becomes an indirect reference for 22

    std::printf("Value of countOne after &x: %p \n", countOne);

    *countOne = 9; //dereferencing a pointer which sets x to 9

    std::printf("Value of countOne after deref: %p \n", countOne);
    std::printf("Value of x after deref: %d \n", x);

    //& GIVES THE MEMORY ADDRESS
    //* GIVES THE VALUE FROM THE MEMORY ADDRESS
    //These two are inverse of eachother  

    return 0;
}