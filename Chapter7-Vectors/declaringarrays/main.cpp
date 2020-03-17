#include <iostream>

/*
note that when using arrays, 
the array is passed by reference (a[i] will be modified)
while the elements are passed by value (a[1] will not be modified) 
*/

int main(){
    
    //methods for initializing arrays
    int arraynew [10] = {1,2,3,4,5,6,7,8,9,0};

    int arraynew2 [10];
    for(int i = 0; i < 10; ++i){
        arraynew2[i] = i+1;
        std::cout << "Value at i: " << arraynew2[i] << std::endl;
    }//for

    /* //initializing by entering values
    int a [10];
    for ( int j = 0; j < 10; ++j ){
        std::cin >> a[ j ]; } 
    */

    return 0;
}//main