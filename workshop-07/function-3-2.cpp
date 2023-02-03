#include <iostream>

int *readNumbers() {
    int length = 10;
    int *number = new int [length];
    for (int i =0 ; i < length ; i++){
        std::cin>> *(number+i);
    }
    return number; 
}

void printNumbers(int *numbers,int length) {
    for (int i =0 ; i < length ; i++){
        std::cout<<i<<" "<<*(numbers+i)<<std::endl;
    }
}

int *reverseArray(int *numbers1,int length) {
    int *array = new int [length];
    int j = length - 1; 
    for (int i =0 ; i < length ; i++){
        array[i] = numbers1[j];
        j--;
    }
    return array;
}

bool equalsArray(int *numbers1,int *numbers2,int length){
    bool result ; 
    if (length > 0){
        for (int i =0 ; i < length ; i++){
            if (numbers1[i] == numbers2[i]){
                result = 1;
            }else{
                result = 0;
            break;
            }
        }
    }else{
        result = 0; 
    }
    return result;
}

