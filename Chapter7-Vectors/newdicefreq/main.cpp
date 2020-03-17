#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


int main(){
    const int arraySize = 7; //such that: [0,...,6]
    int frequency[ arraySize ] = {}; //set frequencies to zero

    std::srand(std::time(NULL)); //seed to random time

    //rolling ten thousand times
    for ( int roll = 1; roll <= 10000; ++roll ){
        ++frequency[ 1 + rand() % 6 ]; //incrementing one to the index 
    }

    std::cout << "Face" << std::setw( 13 ) << "Frequency" << std::endl; //header

    //outputting the frequencies
    for ( int face = 1; face < arraySize; ++face ){
        std::cout << std::setw(4) << face << std::setw(13) << frequency[face] << std::endl;
    }//for


} // end main