#include <iostream>

extern void print_summed_matrices(int [3][3],int [3][3]);

int main(int argc,char **argv){
    //Matrix to be added together
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}} ;
    print_summed_matrices(matrix1,matrix2) ;
    return 0;
    
}
