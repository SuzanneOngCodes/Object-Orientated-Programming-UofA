#include <iostream>

void print_summed_matrices(int array1[3][3],int array2[3][3]){
    for (int r=0;r<3;r++){
        for (int c=0;c<3;c++){
            array1[r][c]=array1[r][c]+array2[r][c];
            std::cout<<array1[r][c]<<" ";
        }
        std::cout<<"\n";
    }
}

