#include <iostream>

extern void print_scaled_matrix(int[3][3],int);

int main(int argc,char **argv){
    // Scale provided
    int scale = 3 ;
    //Matrix
    int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    // Return output from function print_scaled_matrix
    print_scaled_matrix(threebythree,scale);
    return 0;
}
