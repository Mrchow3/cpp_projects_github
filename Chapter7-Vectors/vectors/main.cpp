#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <vector>

/*
Vectors have:
    dynamic memory
    automatic shaping
    by default passed by value for vector and elements
    relational operators can be used

Vectors work like arrays: vector[i] = 10;

Declaring vector: vector<int> "name"(another vector or size);

Variable for iteration: size_t i; needs to be declared due to the template format
and since size_t is unsigned

*/


void fillVector(std::vector<int> &array){

    //or can declare control variable: size_t i; 
    //and not need to declare in for

    for(size_t i =0; i < array.size(); ++i){
        array[i] += 1 + (i*2); //cin also works
    }

}//inputVector

int main(){

    const std::vector <int> hello(10); //vector object creation
    std::printf("Size of a vector: %d \n", hello.size());

    //Exceptions
    try{
        std::printf("Index 15: %d \n", hello.at(15)); //Searching at an index
    }
    catch(std::out_of_range &ex){
        std::cout << "Error: " << ex.what() << std::endl; //Printing out exception
    }

    return 0;
}