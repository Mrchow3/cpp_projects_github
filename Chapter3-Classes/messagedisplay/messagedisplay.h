#ifndef MESSAGEDISPLAY_H
#define MESSAGEDISPLAY_H

#include <iostream>
#include <cstdlib>
#include "string.h"

using namespace std;

class MessageDisplay{

    public:
        MessageDisplay(string); //constructor
        string getstring();
        void setstring(string);
        void display();

    private: 
        string secretmessage;

};

#endif  // MESSAGE_H