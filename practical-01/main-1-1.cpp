#include <iostream>
#include <stdlib.h>

// Extern definition of sum_array function
extern int sum_array(int*, int);

// Main program
int main(int argc,char **argv)
{
    // Declare and initialise an array of int
    int length=5;
    int array[5]={6,7,8,9,11};
    
    // Show the sum of all elements from the n
    std::cout<<"The sum of all elements is "<<sum_array(array, length)<<std::endl;
    
    // Return 0 to indicate nothing went wrong
    return 0 ;
}


