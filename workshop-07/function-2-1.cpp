#include <iostream>

int *readNumbers() {
    int length = 10;
    int *number = new int [length];
    for (int i =0 ; i < length ; i++){
        std::cin>> *(number+i);
    }
    return number; 
}

void hexDigits(int *numbers,int length) {
    if (length > 0){
    char *digits = new char [10]; 
    for (int i =0 ; i < length ; i++){
        switch (numbers[i]){
            case 10:
            digits[i] = 'A';
            break;
            case 11:
            digits[i] = 'B';
            break;
            case 12:
            digits[i] = 'C';
            break;
            case 13:
            digits[i] = 'D';
            break;
            case 14:
            digits[i] = 'E';
            break;
            case 15:
            digits[i] = 'F';
            break;
            default:
            digits[i] = numbers[i] + '0';
            break;
        }
        std::cout<<i<<" "<<*(numbers+i)<<" "<<*(digits+i)<<std::endl;;
    }
    }
}


