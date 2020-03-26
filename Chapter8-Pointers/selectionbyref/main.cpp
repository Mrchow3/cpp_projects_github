#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <vector>

const int size = 5;

//LOOK AT selectionSort AND swap, SWAPPING ARRAY ELEMENTS BY REFERENCE




// swap values at memory locations to which
// element1Ptr and element2Ptr point
void swap(int* const element1Ptr, int* const element2Ptr){
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}//swap


void selectionSort( int * const array, const int size ){
    int smallest; // index of smallest element

    //loop over size-1 elements
    for (int i = 0; i < size - 1; ++i){
        smallest = i; //first index of remaining array

    // loop to find index of smallest element
        for (int index = i + 1; index < size; ++index){

            if (array[index] < array[smallest]) //sets the smallest index
                smallest = index;
        }//for

        swap(&array[i], &array[smallest]); //if already smallest swap, swaps itself
    }//for
} //selectionSort

void fillArray(int array []){
    std::srand(std::time(NULL));

    for(int i = 0; i < ::size; ++i){
        array[i] = 1 + std::rand() % 25; //passes by reference
    }

    return; 
}

int main(){

    int array [::size] = {};
    fillArray(array); 

    for(int i = 0; i < ::size; ++i){
        printf("%d ", array[i]);
    }

    printf("\n");
    selectionSort(array, ::size);

    for(int i = 0; i < ::size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}