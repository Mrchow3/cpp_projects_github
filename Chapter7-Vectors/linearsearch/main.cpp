#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>

const int size = 10000;

int linearSearch(int array [] , int flag){

    for(int i = 0; i < ::size; ++i){
        if (array[i] == flag){
            std::cout << "Your flag was found at index " << i << " !" <<  std::endl;
            return i; //returns the index at which the flag is met and breaks loop
        }    
    }//for

    std::cout << "Sorry couldn't find " << flag << " or there was an error!" << std::endl;

    return -1; //make sure to put this condition outside of the for loop
}//linearSearch



void fillArray (int array[]){ //since an array is input directly, it is passed by reference

    std::srand(std::time(0));

    for(int i = 0; i < size; ++i){
        array[i] = 1 + std::rand() % 100; //range from 1 to 100
    }//for

    return;
}//genArray




int main(){
    int newarray [::size] = {};
    fillArray(newarray);

    const int flag = 5;
    printf("Flag value is %d\n" , flag);
    linearSearch(newarray,flag);

    /*
    int value = linearSearch(newarray,flag);
    printf("%d \n",value);
    */

    return 0;
    
}//main