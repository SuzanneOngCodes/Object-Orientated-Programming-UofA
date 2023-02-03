#include <iostream>
#include <stdlib.h>
#include <stdio.h>


// Extern definition of count function
extern int count(int*,int,int);

int main(int argc,char **argv)
{
    // Declare and initialise an array of int
    int length=8;
    int array[8]={1,7,43,9,11,100,43,43};
    int number;
    std::cout<<"The desired number is: ";
    scanf("%d",&number);
    
    // Show the average of all elements from the n
    std::cout<<"The number of desired number in the array is "<< count(array,length,number)<< std::endl;
    
    // Return 0 to indicate nothing went wrong
    return 0 ;
    
}

