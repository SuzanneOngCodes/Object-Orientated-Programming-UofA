#include <iostream>

extern int maximum_sum(int *,int) ;

int main(){
    int number=10;
    int *vector=new int[number];
    for (int i=0;i<number;i++){
            std::cin>>*(vector+i);
    }
    std::cout<<maximum_sum(vector,number)<<std::endl;
    delete[] vector;
    return 0;
}

