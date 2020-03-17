#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

#include "diceroller.h"

void DiceRoller::diceroll(){
    std::cout << "This function prints out six rolled die." << std::endl;

    std::srand(std::time(NULL)); //seed = # of seconds since Jan 1 1970

    double face;
    for(int i = 0; i <= 20; ++i){
        face = (1 + std::rand() % 6);
        std::cout << std::left;
        std::cout << face << std::setw(5);

        if (i%5==0){
            std::cout << std::endl; //starts a new line once the output reaches 5 on one line 
        }//if

    }//for
}//diceroll

void DiceRoller::dicefreq(){
    std::cout << "This function prints out six rolled die." << std::endl;

    int freq1 = 0;
    int freq2 = 0;
    int freq3 = 0;
    int freq4 = 0;
    int freq5 = 0;
    int freq6 = 0;

    int face = 1; //declares face and stores the most recent face value

    std::srand(std::time(NULL));

    for(int i = 0; i <= 6000000; ++i){
        face = (1 + rand() % 6);

        switch(face){
            case 1:
                ++freq1;
                break;
            case 2:
                ++freq2;
                break;    
            case 3:
                ++freq3;
                break;
            case 4:
                ++freq4;
                break;
            case 5:
                ++freq5;
                break;
            case 6:
                ++freq6;
                break;

            default:
                std::cout << "There has been a critical error." << std::endl;
                break;        
        }//switch
    }//face
    
    std::cout << "Frequency of rolling a 1: " << freq1 << std::endl;
    std::cout << "Frequency of rolling a 2: " << freq2 << std::endl;
    std::cout << "Frequency of rolling a 3: " << freq3 << std::endl;
    std::cout << "Frequency of rolling a 4: " << freq4 << std::endl;
    std::cout << "Frequency of rolling a 5: " << freq5 << std::endl;
    std::cout << "Frequency of rolling a 6: " << freq6 << std::endl;
}//dicefreq