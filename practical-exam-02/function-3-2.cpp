#include <iostream>

int *createArray(int n){
    int *array=new int [n];
    for (int i=0;i<n;i++){
        std::cin>>*(array+i);
    }
    return array;
}

void displayArray(int *numbers, int length){
    for (int i=0;i<length;i++){
         std::cout<<i<<" "<<*(numbers+i)<<std::endl;
    }
}

int *mergeArrays(int* A, int* B, int length) {
    int *new_array=new int [length*2];
    int index=0;
    for (int i=0;i<length;i++){
        new_array[index]=A[i];
        index++;
    }
    for (int i=0;i<length;i++){
        new_array[index]=B[i];
        index++;
    }
    return new_array;
}