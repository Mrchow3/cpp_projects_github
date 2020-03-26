#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <vector>

int main(){

    int b[5] = {1,2,3,4,5};
    int *bPtr;

    bPtr = b; //equivalent to &b[0]
    
    //pointing to value at specified memory address
    //important offset notation
    std::printf("*(bPtr+3) offset: %d \n", *(bPtr+3) );
    std::printf("*(b+3) offset: %d \n",*(b+3));
    std::printf("bPtr[3] offset: %d \n", bPtr[3] ); //bPtr = b
    std::printf("\n");

    //Printing out memory addresses
    std::printf("&b[3]: %p \n",&b[3]);
    std::cout << "b: " << b << std::endl;

    return 0;
}

