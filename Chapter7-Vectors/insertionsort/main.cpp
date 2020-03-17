#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

const int size = 10; //ten thousand

void fillArray (int array[]){ //since an array is input directly, it is passed by reference

    std::srand(std::time(0));

    for(int i = 0; i < size; ++i){
        array[i] = 1 + std::rand() % 100; //range from 1 to 100
    }//for

    return;
}//fillArray

void insertionsort(int newarray[]){
    int insert;

    for (int next = 1; next < size; ++next){

        insert = newarray[next]; //store the value in the current element
        int moveItem = next; //initialize location to place element

        
        while ( (moveItem > 0) && (newarray[moveItem - 1] > insert ) ){ //search for the location in which to put the current element
                
            newarray[moveItem] = newarray[moveItem - 1]; //swap with the previous value

            moveItem--; //de-increment to compare with the new previous item
        } //while

        newarray[moveItem] = insert; //place inserted element into the array or finalize position


    } //for
    
    printf("Sorted array: ");
    for(int i = 0; i < size; ++i)
        std::cout << newarray[i] << " "; 
    std::cout << "\n";

    return;
}

int main(){

    int newarray [::size] = { };
    fillArray(newarray);

    printf("Initial array: ");
    for(int i = 0; i < size; ++i)
        std::cout << newarray[i] << " "; 
    std::cout << "\n";


    insertionsort(newarray);
    


    return 0;
}