#include <iostream>

int *readNumbers(){
    int *numbers=new int [10];
    for (int i=0;i<10;i++){
        std::cin>>*(numbers+i);
    }
    return numbers;
}

int secondSmallestSum(int *numbers,int length){
    int second;
    int *array=new int [length*length];
    int index=0;
    for (int i=0;i<length;i++){
        int sum=0;
        for (int j=i;j<length;j++){
            sum+=numbers[j];
            array[index]=sum;
            index++;
        }
    }
    for (int i=0;i<index;i++){
        for (int j=i+1;j<index;j++){
            int temp;
            if(array[i]>=array[j]){
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }

    second=array[1];
    return second;
}