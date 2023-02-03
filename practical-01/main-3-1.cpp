#include <iostream>
#include <stdlib.h>

extern bool fanarray(int*, int);

int main(int argc,char **argv){
    int parameter=4;
    int elements[4]={2,4,4,2};
    std::cout<<fanarray(elements,parameter)<<std::endl;
    return 0;
}

