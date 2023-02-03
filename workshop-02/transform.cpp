#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main(){
    int x=0;
    int index=0;
    int answer[30];
    std::cout<<"The number: ";
    std::cin>>x;
    while (x>0){
        if (x%2==0){
            int number=0;
            answer[index]=0;
        }else{
            answer[index]=1;
        }
        index++;
        // The divided value of base 2
        x=abs(x/2);
    }
    printf("The binary number is ");
    for (int i=index-1;i>-1;i--){
        printf("%d", *(answer+i));
    }
    printf("\n");

    
    return 0;
}
