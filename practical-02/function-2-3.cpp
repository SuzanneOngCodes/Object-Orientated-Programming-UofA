#include <iostream>

int sum_elements(int integers[], int length){
    if (length>0){
        int sum=0;
        for (int i=0;i<length;i++){
            sum+=integers[i];
        }
        return sum;
    }else{
        return -1;
    }
}

bool is_a_palindrome(int integers[], int length){
    if (length>0){
        for (int i=0;i<length;i++){
            for (int j=length-1;j>0;j--){
                if (integers[i]==integers[j]){
                    return true;
                }else{
                    return false;
                    break;
                }
            }
        }
    }
    return 0;
}

int sum_if_a_palindrome(int integers[], int length){
    if (length>0){
        if (is_a_palindrome(integers,length)==true){
            int total=sum_elements(integers,length);
            return total;
        
        }else{
            return -2;
        }
    }else{
        return -1;
    }
}
