#include <iostream>

extern int *readNumbers();
extern bool equalsArray(int *,int *,int ) ;
extern int *reverseArray(int *,int ) ;

int main(){
    int length=10;
    int *array=new int [length];
    int *array2=new int [length];
    array=readNumbers();
    array2=reverseArray(array,length);
    std::cout<<equalsArray(array,array2, length)<<std::endl;
    delete[] array;
    delete[] array2;
    return 0;
}