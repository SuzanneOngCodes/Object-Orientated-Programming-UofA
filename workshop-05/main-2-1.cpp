#include <iostream>


extern int *readNumbers();
extern void hexDigits(int *,int) ;

int main(){
    int length=10;
    int *array=new int [length];
    array=readNumbers();
    hexDigits(array, length);
    delete[] array;
    return 0;
}