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