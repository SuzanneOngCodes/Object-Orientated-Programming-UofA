#include <iostream>

extern void cpyia(int [],int [],int );

int main(){
    int number=3;
    int first[3]={1,2,3};
    int *old_array=first;
    int second[6];
    int *new_array=second;
    cpyia(old_array,new_array,number);
    return 0;
}
