#include <iostream>

int count_even(int number){
    int evens=0;
    int parameter=sizeof(number)/sizeof(int);
    if (parameter>0){
        for (int i=0; i<number; i++){
            evens=number/2;
        }
    }
    return evens;
}
