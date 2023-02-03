#include <iostream>
#include <stdlib.h>

double weightedaverage(int array[], int n){
    if (n>0){
        int* total_array=(int*)malloc(n);
        for (int i=0;i<n;i++){
            int count=0;
            for (int j=0;j<n;j++){
                if (array[i]==array[j]){
                    count++;
                }
                
            }
            total_array[i]=count;
        }

        double average=0;
        for (int i=0;i<n;i++){
            double division=0;
            division=array[i]*total_array[i];
            division=division/n;
            average+=division;
        }
        
        return average;
    }
    return 0;
}

