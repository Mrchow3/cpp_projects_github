#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

int main(){

    int insert = 1;
    int next = 0;
    int newarray [5] = {0,1,2,3,4};

    insert = newarray[next];
    std::cout << "Next: " << insert << "\n";
    int moveItem = next;
    newarray[moveItem] = insert;
    std::cout << "After moveitem: " << insert << "\n";
    
    

    return 0;
}