#include <iostream>

extern int *createArray(int );
extern void displayArraySubsets(int *,int ) ;;

int main(){
    int number;
    std::cin>> number; 
    int *array=createArray(number);
    displayArraySubsets(array,number);
    delete[] array;
    return 0;
}