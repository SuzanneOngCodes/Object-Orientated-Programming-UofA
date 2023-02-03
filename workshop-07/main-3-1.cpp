#include <iostream>

extern int *readNumbers() ;
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main(){
    int length = 10; 
    int *array = new int [length];
    int *array2 = new int [length];
    bool result;
    array = readNumbers();
    array2 = readNumbers();
    result = equalsArray(array,array2,length);
    delete[] array;
    return 0 ; 
}