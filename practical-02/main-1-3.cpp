#include <iostream>

extern void count_numbers(int[4][4]);

int main(int argc,char **argv){
    int x[4][4]={};
    for (int r=0;r<4;r++){
        for (int c=0;c<4;c++){
            std::cout<<"Row "<<r<<", Column "<<c<<" :";
            // Request user's input
            std::cin>>x[r][c];
            }
        }
    // Show result from count_numbers function
    count_numbers(x);
    return 0;
    }


