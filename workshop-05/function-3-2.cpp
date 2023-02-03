#include <iostream>

int *readNumbers(){
    int *numbers=new int [10];
    for (int i=0;i<10;i++){
        std::cin>>*(numbers+i);
    }
    return numbers;
}

bool equalsArray(int *numbers1,int *numbers2,int length){
    bool result;
    if (length>0){
        for (int i=0;i<length;i++){
            if (numbers1[i]==numbers2[i]){
                result=1;
                
            }else{
                result=0;
                break;
            }
        }
    }else{
        result=0;
    }
    return result;
}

int *reverseArray(int *numbers1,int length){
    int *reverse = new int [length];
    for (int i=0;i<length;i++){
        reverse[i]=numbers1[length-1-i];
    }
    return reverse;
}
