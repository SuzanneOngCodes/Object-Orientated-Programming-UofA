#include <iostream>
#include <stdlib.h>
#include <stdio.h>

extern int count_even(int);

int main(int argc,char **argv){
    int num;
    printf("Enter a number: ");
    std::cin>>num;
    std::cout<< "The  number of even numbers between 1 and "<<num<< " is "<<count_even(num)<<std::endl;
    return 0;
}
