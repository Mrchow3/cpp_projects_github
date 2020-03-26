#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <vector>

//for any array, the [0]th index stores the array's memory address

//pointers pointing to the same array can be subtracted from eachother
//pointer arithmetic works best when the pointers points to an array

int main(){

    int array [5];  

    int* ptr = 0; //creating a null pointer
    ptr = &array[0]; //ptr points to the memory address of array[0]


    ptr += 1; //increments by size of the memory
    //if object size = 2 bytes: ptr += 1 * 2
    //if object size = 8 bytes: ptr += 1 * 8

    //conversion of pointers types
    char* cPtr = 0;
    int* iPtr = reinterpret_cast<int*>(cPtr);


    return 0;
}