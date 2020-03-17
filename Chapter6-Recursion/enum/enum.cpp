#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

#include "enum.h"

int Enum::sumDice(){ //notice that the maximum sum is 12

    std::srand(std::time(NULL));
    
    int dice1 = 1 + rand() % 6;
    int dice2 = 1 + rand() % 6;

    return dice1 + dice2;
}

void Enum::enumerate(){
    
    enum Status {CONTINUE, WON, LOST}; //creates an enumeration named status with specific parameters
    Status gameStatus; //creates an enumerate object called gameStatus

    int roll = sumDice();
    int points_to_win;

    switch(roll){

        case 7:
            gameStatus = WON;
            std::cout << "You won with " << roll << " points!" << std::endl;
            break;
        case 11:
        gameStatus = WON;
        std::cout << "You won with " << roll << " points!" << std::endl;
            break;

        case 2:
            gameStatus = LOST;
            std::cout << "You lost!" << std::endl;
            break;
        case 3:
            gameStatus = LOST;
            std::cout << "You lost!" << std::endl;
            break;
        case 12:
            gameStatus = LOST;
            std::cout << "You lost!" << std::endl;
            break;

        default:
            gameStatus = CONTINUE;
            points_to_win = roll; 
            std::cout << "Game is not over yet, you need: " << points_to_win << " points to win." << std::endl;
            break;
    }//switch


    while(gameStatus == CONTINUE){
        int k = sumDice();
        
        if(k == points_to_win){
            gameStatus = WON;
            std::cout << "You won with " << k << " points!" << std::endl;
        }
        if(k == 7){
            gameStatus = LOST;
            std::cout << "You lost!" << std::endl;
        }
        else
            continue;
    }//while


}//enumerate

