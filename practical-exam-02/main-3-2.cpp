#include <iostream>

extern int *createArray(int );
extern int *mergeArrays(int * , int * , int ) ; 
extern void displayArray(int *, int );

int main(){
    int number;
    std::cin>> number; 
    int *array1=createArray(number);
    int *array2=createArray(number);
    int *large_array=mergeArrays(array1,array2,number);
    displayArray(large_array,number);
    delete[] array1;
    delete[] array2;
    delete[] large_array;
    return 0;
}