#include <iostream>
#include <stdlib.h>

extern double sumeven(double*, int);

int main(int argc,char **argv){
    int parameter=7;
    double elements[7]={1000,333,8,-1000,5,9,3};
    std::cout<<"The sum is "<<sumeven(elements,parameter)<<std::endl;
    return 0;
}
