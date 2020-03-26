#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <stdexcept>
#include "Time.h"

Time::Time(){
    hour , minute , second = 0;
}

void Time::setTime(int h, int m, int s){ //default params in Time.h

    //validating values:
    if( (h>=0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){
        hour = h;
        minute = m;
        second = s;
    }
    else 
        throw std::invalid_argument("A time value is out of range");
        //detects an invalid argument and throws an error
    return;
}//setTime
        
void Time::printUniversal(){

    //setfill will fill any whitespace from the left with zero
    //This is declared once and can be changed with another declaration
    std::cout << std::setfill('0') << std::setw(2) << hour << ":" <<
    std::setw(2) << minute << ":" <<
    std::setw(2) << second << std::endl;

    return;
}//printUniversal

void Time::printStd(){
    std::cout << ( ( hour == 0 ||hour == 12 ) ? 12 : hour% 12 ) << ":"
    << std::setfill('0') << std::setw( 2 ) << minute << ":" << std::setw( 2 )
    << second << ( hour < 12 ? " AM" : " PM" ) << std::endl;

    return;
}

