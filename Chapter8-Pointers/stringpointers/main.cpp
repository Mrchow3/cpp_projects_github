#include <iostream>
#include <iomanip>

//pointer based strings end with a null char: "\0"
//These strings behave like arrays
//String literals are static and cannot be modified

int main(){

    //creating an array: ['b','l','u','e','\0']
    char color [] = "blue";
    const char* colorPtr = "blue"; //pointer to the letter 'b' (memory address of array) which ends in '\0'
    //always define string pointers with constants

    //char color [] automatically determines the size of the array
    //naturally, the size should include the terminating character

    char word [20]; //will behave like a string

    std::cout <<"Entering \"word\"" << std::endl;
    std::cin >> std::setw(20) >> word; //setw(20) creates an input space of 20 

    std::cout << word << std::endl;
    std::printf("%s\n", word);


    
    char sentence [100];

    //input sentence, length 100, end at newline
    std::cin.getline(sentence, 100, '\n'); 

    return 0;
}