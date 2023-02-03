#include <iostream>

extern int *createArray(int );
extern void displayArray(int *, int );

int main(){
    int number;
    std::cin>> number; 
    int *array=createArray(number);
    displayArray(array,number);
    delete[] array;
}