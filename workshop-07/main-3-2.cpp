#include <iostream>

extern int *readNumbers() ;
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length) ;

int main(){
    int length = 10; 
    int *array = new int [length];
    int *array2 = new int [length];
    array = readNumbers();
    array2 = reverseArray(array, length);
    bool result = equalsArray(array, array2, length);
    delete[] array;
    delete[] array2;
    return 0 ; 
}