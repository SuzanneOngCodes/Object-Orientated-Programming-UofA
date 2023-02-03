#include <iostream>

extern int diagonal(int[4][4]);

int main(int argc,char **argv){
    int x[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    std::cout<<"The sum is "<<diagonal(x)<<std::endl;
    return 0;
}
