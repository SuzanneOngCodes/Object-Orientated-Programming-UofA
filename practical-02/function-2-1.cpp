#include <iostream>
#include <string>
#include <stdio.h>

void print_as_binary(std::string decimal_number){
    int number=stoi(decimal_number);
    int binary[27];
    int index=0;
    while (number>0){
        if (number%2==0){
            binary[index]=0;
        }else{
            binary[index]=1;
        }
        index++;
        // The divided value of base 2
        number=abs(number/2);
    }
    
    int answer[27];
    int count=0;
    for (int i=index-1;i>=0;i--){
        int temporary=binary[i];
        answer[count]=temporary;
        count++;
    }
    
    for (int i=0;i<index;i++){
        printf("%d", *(answer+i));
    }
    printf("\n");
    
}

