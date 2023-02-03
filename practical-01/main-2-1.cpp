#include <iostream>
#include <stdlib.h>

extern int minimum(int*, int);

int main(int argc,char **argv){
    int parameter=3;
    int elements[3]={77,-22,6};
    std::cout<<"The minimum number is "<<minimum(elements,parameter)<<std::endl;
    return 0;
}
