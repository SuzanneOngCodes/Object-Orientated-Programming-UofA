#include <iostream>


int *createArray(int n){
    int *array=new int [n];
    for (int i=0;i<n;i++){
        std::cin>>*(array+i);
    }
    return array;
}

void bonus(int *numbers, int length){
    float *values=new float[length];
    for (int i=0;i<length;i++){
        values[i]=numbers[i];
        values[i]+=50.55;
        if (values[i]>=0){
            std::cout<<"New value: "<<values[i]<<std::endl; 
        }else{
            std::cout<<"Negative account: "<<values[i]<<std::endl; 
        }
    }
}
