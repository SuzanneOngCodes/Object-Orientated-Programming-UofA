#include <iostream>

int *createArray(int n){
    int *array=new int [n];
    for (int i=0;i<n;i++){
        std::cin>>*(array+i);
    }
    return array;
}

void okToEat(int* ratings, int len) {
    for (int i=0;i<len;i++){
        switch (ratings[i]){
            case 100:
            std::cout<<i<<" "<<ratings[i]<<" "<<"Super clean, Very safe"<<std::endl;
            break;
            case 80:
            std::cout<<i<<" "<<ratings[i]<<" "<<"Won't get you sick"<<std::endl;
            break;
            case 60:
            std::cout<<i<<" "<<ratings[i]<<" "<<"Make sure it's well-done"<<std::endl;
            break;
            case 40:
            std::cout<<i<<" "<<ratings[i]<<" "<<"No"<<std::endl;
            break;
            default:
            std::cout<<"Sorry, unknown ranking."<<std::endl;
        }
    }
}