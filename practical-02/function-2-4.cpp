#include <iostream>

int max_integer(int integers[], int length){
    if (length>0){
        int max=integers[0];
        for (int i=1;i<length;i++){
            if (integers[i]>max){
                max=integers[i];
            }
        }
        return max;
    }else{
        return -1;
    }
}

int min_integer(int integers[], int length){
    if (length>0){
        int min=integers[0];
        for (int i=1;i<length;i++){
            if (integers[i]<min){
                min=integers[i];
            }
        }
        return min;
    }else{
        return -1;
    }
}

int sum_min_and_max(int integers[], int length){
    if (length>0){
        int total=min_integer(integers,length) + max_integer(integers,length);
        return total;
    }else{
        return -1;
    }
}


