#include <iostream>

bool ascending(int array[], int n){
    for (int i=0; i<n-1; i++){
        int j=i+1;
        if (array[i]<array[j]){
            return 1;
        }else{
            break;
        }
    }
    return 0;
}
