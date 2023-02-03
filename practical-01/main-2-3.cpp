#include <iostream>
#include <stdlib.h>

extern void twofivenine(int*, int);

int main(int argc,char **argv){
    int parameter=10;
    int elements[10]={5,9,2,2,2,3,4,5,6};
    twofivenine(elements, parameter);
    return 0;
}
