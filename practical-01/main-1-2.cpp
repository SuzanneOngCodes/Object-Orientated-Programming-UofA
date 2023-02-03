#include <iostream>
#include <stdlib.h>
#include <stdio.h>

// Extern definition of average function
extern double average(int*, int);

// Main program
int main(int argc,char **argv)
{
    // Declare and initialise an array of int
    int length=7;
    int array[7]={1,7,8,9,11,100,34};
    
    // Show the average of all elements from the n
    std::cout<<"The average of all elements is ";
    printf("%.1f\n", average(array,length));
    
    // Return 0 to indicate nothing went wrong
    return 0 ;
}


