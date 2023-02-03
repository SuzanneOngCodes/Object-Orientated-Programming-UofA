#include <iostream>

int *createArray(int n){
    int *array=new int [n];
    for (int i=0;i<n;i++){
        std::cin>>*(array+i);
    }
    return array;
}

void displayArraySubsets(int *nums, int len){
    for (int i=0;i<len;i++){
        int *sum;
        int index=0;
        for (int j=i;j<len;j++){
            sum=new int [index];
            sum[index]= nums[j];
            if (index<len-1){
                std::cout<<*sum<<",";
            }else{
                std::cout<<sum;
            }
            index++;
        }
        std::cout<<std::endl;
    }
}