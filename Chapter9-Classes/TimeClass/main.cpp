#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <stdexcept>
#include "Time.h"

int main(){

    Time t;

    t.setTime();
    t.printUniversal();
    std::printf("\n");
    t.printStd();

    try{
        t.setTime(32,100,500);
    }
    catch(std::invalid_argument &e){
        std::cout << "Exception: " << e.what() << std::endl << std::endl;
    }

    return 0;
}
