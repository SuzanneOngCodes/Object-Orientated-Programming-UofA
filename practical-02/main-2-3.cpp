#include <iostream>

// Extern the three functions
extern int sum_if_a_palindrome(int*,int);
extern bool is_a_palindrome(int*,int);
extern int sum_elements(int*,int);

int main(int argc,char **argv){
    // The length
    int length_of_matrix=6;
    //Matrix
    int array[6] = {1,2,0,0,2,1} ;
    std::cout<<"The sum of the elements is "<<sum_elements(array,length_of_matrix)<<std::endl;
    std::cout<<is_a_palindrome(array,length_of_matrix)<<std::endl;
    std::cout<<"The sum of the palindrome is "<<sum_if_a_palindrome(array,length_of_matrix)<<std::endl;
    return 0;
}

