#include <iostream>
#include <stdio.h>

void twofivenine(int array[], int n){
int num_twos=0;
int num_fives=0;
int num_nines=0;

if (n>0){
    for (int i=0; i<n; i++){
        switch (array[i]){
            case 2:
                num_twos++;
                break;
            case 5:
                num_fives++;
                break;
            case 9:
                num_nines++;
                break;
        }
    }
}
    printf("2:%d;5:%d;9:%d;\n",num_twos,num_fives,num_nines);
}
