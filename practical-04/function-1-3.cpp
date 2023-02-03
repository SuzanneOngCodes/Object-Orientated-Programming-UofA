#include <iostream>

void cpyia(int old_array[],int new_array[],int length) {
    for (int i=0;i<length;i++){
        *new_array=*old_array;
        new_array++;
        old_array++;
        
    }
}
