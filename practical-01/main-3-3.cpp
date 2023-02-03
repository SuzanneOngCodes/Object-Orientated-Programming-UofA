#include <iostream>
#include <stdlib.h>
#include <stdio.h>

extern double weightedaverage(int*,int);

int main(int argc,char **argv){
    int parameter=6;
    int elements[6]= {1,2,1,4,1,3};
    printf("The weighted average is %f\n",weightedaverage(elements,parameter));
    return 0;
}
