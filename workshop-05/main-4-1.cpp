#include <iostream>


extern int *readNumbers();
extern int secondSmallestSum(int *,int) ;

int main(){
    int length=10;
    int *array=new int [length];
    array=readNumbers();
    std::cout<<secondSmallestSum(array, length)<<std::endl;
    delete[] array;
    
    
    return 0;
}