
#include <iostream>

extern void cpyda(double *,double *,int) ;

int main(){
    int number=3;
    double first[6]={1,2,3,4,5,6};
    double *old_array=first;
    double second[6];
    double *new_array=second;
    cpyda(old_array,new_array,number);
    //std::cout<<std::endl;
    //delete[] first;
    //delete[] second;
    return 0;
}
