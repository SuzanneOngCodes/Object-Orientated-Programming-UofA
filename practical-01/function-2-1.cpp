#include <iostream>

int minimum(int array[], int n){
    int minimum=0;
    if (n>0){
        minimum=array[0];
        for (int i=1; i<n; i++){
            if (array[i]<minimum){
                minimum=array[i];
            }
        }
    }
    return minimum;
}
