#include <iostream>
#include <stdlib.h>
#include <stdio.h>


extern void passorfail(char);

int main(int argc,char **argv){
    char Grade;
    printf("Enter your grade: ");
    std::cin>>Grade;
    passorfail(Grade);
    return 0;
}
