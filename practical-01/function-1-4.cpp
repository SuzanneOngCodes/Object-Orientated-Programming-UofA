#include <iostream>

int sumtwo(int array[], int secondarray[], int n){
    int sum=0;
    if (n>0){
        for (int i=0;i<n;i++){
            sum+=array[i]+secondarray[i];
        }
    }
    return sum;
}
