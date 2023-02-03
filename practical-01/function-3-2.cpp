#include <iostream>
#include <stdlib.h>

int median(int array[], int n){
    if(n>0){
        for (int i=0; i<n; i++){
            int temporary=0;
            for (int j=0;j<n;j++){
                if(array[j]>array[j+1]){
                    temporary=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temporary;
                }
            }
            
        }
        int middle=0;
        int median=0;
        if(n%2!=0){
            middle=n/2;
            median=array[middle];
        }else{
            middle=n/2;
            int next=middle+1;
            median=array[middle]+array[next];
            median=median/2;
        }
        
        return median;
    }
    return 0;
}


