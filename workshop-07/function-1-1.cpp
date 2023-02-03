#include <iostream>

int *readNumbers() {
    int length = 10;
    int *number = new int [length];
    for (int i =0 ; i < length ; i++){
        std::cin>> *(number+i);
    }
    return number; 
}

void printNumbers(int *numbers,int length) {
    for (int i =0 ; i < length ; i++){
        std::cout<<i<<" "<<*(numbers+i)<<std::endl;
    }
}

