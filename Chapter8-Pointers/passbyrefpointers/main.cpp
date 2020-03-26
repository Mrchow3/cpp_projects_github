#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

void cubedByReference (int *ptr){ //takes in a pointer to memory by reference

    *ptr = *ptr * *ptr * *ptr;   
}

int main(){

    int count = 10;
    int *ptr = 0;
    ptr = &count;



    cubedByReference(ptr);

    std::printf("Value &count: %p\n", &count);
    std::printf("Value by #ptr: %d\n", *ptr);

    return 0;
}