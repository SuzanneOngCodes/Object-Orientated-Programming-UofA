#include <iostream>

extern int binary_to_number(int*,int);

int main(int argc,char **argv){
    int length_of_matrix=6;
    //Matrix
    int array[6] = {1,0,0,0,0,1} ;
    std::cout<<"The number is "<<binary_to_number(array,length_of_matrix)<<std::endl;
    return 0;
}

