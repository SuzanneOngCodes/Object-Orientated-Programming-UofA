#include <iostream>


extern int *readNumbers();
extern void printNumbers(int *,int ) ;

int main(){
    int length=10;
    int *array=new int [length];
    array=readNumbers();
    printNumbers(array, length);
    delete[] array;
    return 0;
}