#include <iostream>
#include <stdlib.h>

extern bool descending(int*, int);

int main(int argc,char **argv){
    int parameter=4;
    int elements[4]={1000,333,8,-1000};
    std::cout<<descending(elements,parameter)<<std::endl;
    return 0;
}


