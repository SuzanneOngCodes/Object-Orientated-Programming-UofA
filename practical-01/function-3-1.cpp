#include <iostream>

bool fanarray(int array[], int n){
    for (int i=0; i<n; i++){
        int k=i+1;
        for (int j=n-1;j>-1;i--){
            int l=j-1;
            if (array[i]==array[j]&&array[i]<=array[k]&&array[j]<=array[l]){
                return 1;
            }else{
                return 0;
            }
        }
    }
    return 0;
}

