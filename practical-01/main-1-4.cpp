#include <iostream>
#include <stdlib.h>

extern int sumtwo(int*, int*, int);

int main(int argc,char **argv){
    int length=9;
    int first_array[9]={1,2,3,4,5,6,7,8,9};
    int second_array[9]={9,8,7,0,5,4,3,2,1};
    std::cout<<"The sum of the two arrays is "<< sumtwo(first_array,second_array,length)<<std::endl;
    
    return 0;
}
