#include <iostream>

extern void print_sevens(int *,int ) ;

int main(){
    int number=7;
    int *vector=new int[number];
    for (int i=0;i<number;i++){
            std::cin>>*(vector+i);
    }
    print_sevens(vector,number);
    std::cout<<std::endl;
    delete[] vector;
    return 0;
}

