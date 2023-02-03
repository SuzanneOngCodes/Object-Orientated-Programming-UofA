#include <iostream>

int *readNumbers(){
    int *numbers=new int [10];
    for (int i=0;i<10;i++){
        std::cin>>*(numbers+i);
    }
    return numbers;
}

void hexDigits(int *numbers,int length){
    char *letters= new char[length];
    for (int i=0;i<length;i++){
        switch (numbers[i]){
            case 10:
            letters[i]='A';
            break;
            case 11:
            letters[i]='B';
            break;
            case 12:
            letters[i]='C';
            break;
            case 13:
            letters[i]='D';
            break;
            case 14:
            letters[i]='E';
            break;
            case 15:
            letters[i]='F';
            break;
            default:
            letters[i]=numbers[i]+'0';
            break;
        }
        std::cout<<i<<" "<<*(numbers+i)<<" "<<*(letters+i)<<std::endl;
    }
}