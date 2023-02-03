#include <iostream>

int identity(int array[10][10]){
    int num=0;
    for (int r=0;r<10;r++){
        for (int c=0;c<10;c++){
            if ((array[r][c]==1)&&((r==c)||(c==r))){
                num=1;
            }else if ((array[r][c]==0)&&((r!=c)||(c!=r))){
                num=1;
            }else{
                num=0;
                break;
            }
        }
    }
    return num;
}

