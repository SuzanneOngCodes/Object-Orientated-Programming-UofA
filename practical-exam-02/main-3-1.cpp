#include <iostream>


extern int *createArray(int );
extern void bonus(int *, int ) ;

int main(){
    int number;
    std::cin>> number; 
    int *array=createArray(number);
    bonus(array,number);
    delete[] array;
}