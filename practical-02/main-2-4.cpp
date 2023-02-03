#include <iostream>

extern int sum_min_and_max(int*,int);
extern int max_integer(int*,int);
extern int min_integer(int*,int);

int main(int argc,char **argv){
    int length_of_matrix=5;
    //Matrix
    int array[5] = {111,1,2,7,9} ;
    std::cout<<"The max is "<<max_integer(array,length_of_matrix)<<std::endl;
    std::cout<<"The min is "<<min_integer(array,length_of_matrix)<<std::endl;
    std::cout<<"The sum is "<<sum_min_and_max(array,length_of_matrix)<<std::endl;
    return 0;
}
