#include <iostream>
#include <iomanip>
#include "string.h"

//using namespace std;

/*
++c increments by one then prints the value

c++ prints the value then increments by one
*/

int main(){

    //?: operator
    std::cout << ( 70 >= 60 ? "Passed" : "Failed" ) << std::endl; // ?: takes a condition and two respective outputs
    70 >= 60 ? std::cout << "Passed\n" : std::cout << "Failed" << std::endl; //Equivalent statment


    //Static conversions
    int total = 10;
    double average = static_cast<double>( total ) / 3; //static_cast<"type">("variable")


    //print formatting
    std::cout << "converted average: " << std::setprecision(3) << 
        average << std::endl;

    std::cout << "fixed converted average: " << std::setprecision(3) << 
        std::fixed << average << std::endl;

    std::cout << "scientific converted average: " << std::setprecision(3) << 
        std::scientific << average * 10 << std::endl;
    
    
    return 0;
}