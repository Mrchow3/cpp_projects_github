#ifndef TIME_H //iff not defined, TIME_H is defined and code is header is included
#define TIME_H //preprocessor wrappers

class Time{

    public:
    Time(); //creating an empty constructor
    void setTime(int=12,int=0, int=0); //h, m, s with default params
    void printUniversal(); //prints the universal format
    void printStd(); //prints the standard time

    private: 
        int hour; //0-23, military time
        int minute; // 0-59
        int second; //0-59

};


#endif