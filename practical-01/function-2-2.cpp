#include <iostream>

int maximum(int array[], int n){
    int maximum=0;
    if (n>0){
        maximum=array[0];
        for (int i=1; i<n; i++){
            if (array[i]>maximum){
                maximum=array[i];
            }
        }
    }
    return maximum;
}

