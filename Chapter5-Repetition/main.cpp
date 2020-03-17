#include <iostream>
#include <iomanip>
#include <cmath>

//using namespace std;

/*
while(){ }
do{ } while()
for(){ }
continue: skips the rest of the loop

switch(input){
    case "insert input value":
        "result"
        break;
     default: 
        "result"   
        break;
}
*/

//ctrl alt c to break loop

void usingsetw();
void interest();

int main(){
    //interest calculator
    std::cout << "Using the interest calculaor" << std::endl;
    interest(); 

    //setw to shift output
    std::cout << "Using cout shifts" << std::endl;
    usingsetw();

    //char to ascii int
    std::cout << "ASCII chars" << std::endl;
    std::cout << static_cast<int>('a') << std::endl; //prints the ascii value for A
    return 0;
}//main

void interest(){
    //creating a compound interest calculator

    double amount;
    double principal = 1000.0;
    double rate = 0.05;

    //using setw()
    std::cout << "Year" <<std::setw(21) << "Amount on deposit" << std::endl; //set(w) means set whitespace to 21 spaces
    std::cout << std::fixed << std::setprecision(2);


    //using pow()
    for(int year = 1; year <= 10; ++year){

        amount = principal * pow( 1.0 + rate, year ); //pow(base,exponent)

        std::cout << std::setw( 4 ) << year //moves the print line to the forth char
        << std::setw( 21 ) << amount //moves the print line to the 21st char.
        << std::endl;
    }//for

    /*
    When using double, numbers can automatically be rounded by accident. 
    For example: 32.907 turns into 32.91. This may cause errors in programs.
    */
}

void usingsetw(){

    std::cout.width(6); std::cout << std::left << "32" << std::endl;
    std::cout.width(6); std::cout<< std::right << "32" << std:: endl;
    std::cout.width(6); std::cout << std::internal << -32 << std::endl; //fills at the negative sign
}