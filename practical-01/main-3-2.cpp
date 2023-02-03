#include <iostream>
#include <stdlib.h>

extern int median(int*, int);

int main(int argc,char **argv){
    int parameter=4;
    int elements[4]={4,3,2,1};
    std::cout<<median(elements,parameter)<<std::endl;
    return 0;
    
}
