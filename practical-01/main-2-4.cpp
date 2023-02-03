#include <iostream>
#include <stdlib.h>

extern bool ascending(int*, int);

int main(int argc,char **argv){
    int parameter=3;
    int elements[3]={-99,-22,6};
    std::cout<<ascending(elements,parameter)<<std::endl;
    return 0;
}

