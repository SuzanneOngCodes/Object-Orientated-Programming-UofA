#include <iostream>

extern int identity(int[10][10]);

int main(int argc,char **argv){
    int x[10][10]={};
    for (int r=0;r<10;r++){
        for (int c=0;c<10;c++){
            std::cout<<"Row "<<r<<", Column "<<c<<" :";
            std::cin>>x[r][c];
            }
        }
    
    std::cout<<identity(x)<<std::endl;
    return 0;
    }

