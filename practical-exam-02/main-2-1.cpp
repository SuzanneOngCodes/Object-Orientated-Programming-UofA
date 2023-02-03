#include <iostream>

extern void okToEat(int* , int ) ;
extern int *createArray(int );

int main(){
    int number;
    std::cin>> number; 
    int *array=createArray(number);
    okToEat(array, number);
    delete[] array;
}