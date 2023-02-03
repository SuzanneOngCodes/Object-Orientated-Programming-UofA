#include <iostream>

int binary_to_number(int binary_digits[], int number_of_digits){
    // Initializing the base value to 1, 2^0
    int base=1;
    int number=0;
    for (int j=number_of_digits-1;j>-1;j--){
        // To calculate (2^number of digits) for the conversion of decimal to binary
        if (binary_digits[j]==1){
            number+=base;
        }
        // Multiply 2 because 2^3=2x2x2
        base=base*2;
    }
    return number;
}
