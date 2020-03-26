#include <iostream>
#include <iomanip>

//funcation names are the starting address in memory that executes a task
//pointers to functions can be treated similarly to a data type

using namespace std;

bool compare(int a, int b){

    return a > b;
}

int main(){
           
    bool (*comparePtr)(int, int){compare}; //creates a pointer to compare that takes two ints and returns a bool

    cout <<"Calling *comparePtr: " << *comparePtr << endl; //printing out the return value


    bool result = (*comparePtr)(2,1); //calling compare(2,1) through a pointer
    cout << "Calling (*comparePtr)(2,1): " << result << endl;

    return 0;
}