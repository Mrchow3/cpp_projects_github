#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

extern int variableExtern = 10;

class TestClass{
    public:
    TestClass();
    void testingMutable();
    mutable int variableMutable = 20; 
    
};