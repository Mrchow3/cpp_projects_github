#include <iostream>
#include <iomanip>

/*
Note that the first element of an array points to the memory address. Therefore,
b[0] is equivalent to b and "b" from "blue" is equivalent to b.
*/

int main(){

    int* iPtr1 = 0;
    int* iPtr2 = 0;
    int* iPtr3 = 0;

    //char color [5] = "blue";

    //The following is read from right to left
    //arrayPtr is a constant to pointer to a constant integer
    //This means that the elements are constant
    const int* const arrayPtr[3] ={iPtr1, iPtr2, iPtr3};
    const char* const strPtr[4] = {"blue", "red"}; 

    for(int i = 0; i < 3; ++i)
        std::printf("%p ",arrayPtr[i]);
    std::printf("\n");


    for(int i = 0; i < 4; ++i)
        std::printf("%p ",strPtr[i] + ' ');
    std::printf("\n");
        
    return 0;
}