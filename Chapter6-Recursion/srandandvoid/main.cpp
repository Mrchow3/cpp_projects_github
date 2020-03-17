#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>


void func(){

    //rand()
    double i = (1 + std::rand() % 6); //value is not seeded, takes modulo then adds one to remove zero
    std::cout << "Unseeded random number: " << i << std::endl;
    

    //srand()
    int unsigned seed;
    std::cout << "Enter the seed value: " << std::endl; std::cin >> seed;
    std::srand(seed); //Creates a seed where that value can replicates the random state

    double j = (1 + std::rand() % 6); 
    std::cout << "Seeded random number: " << j << std::endl;

    return; //void functions can have an empty return statement
}

int main(){
    
    func();
    
    return 0;
}