#include <iostream>

void cpyda(double *old_array,double *new_array,int length){
    
    for (int i=0;i<length;i++){
        *new_array=*old_array;
        new_array++;
        old_array++;
        
        
    }
    
}

