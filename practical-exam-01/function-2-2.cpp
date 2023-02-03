#include <iostream>

int binary_to_number(int binary_digits[], int number_of_digits){
int sum=1;
int value=1;

for (int i=number_of_digits-2;i>-1;i--){
value=value*2;

if (binary_digits[i]==1){
sum+=value;
}
}
return sum;
}

