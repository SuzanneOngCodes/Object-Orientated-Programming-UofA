#include <iostream>
#include <string>
#include <stdio.h>

//pow(2,n) #include <math.h>

int add(char *first,char *second){
    //to carry the value
    length1=strlength(first);
    length2=strlength(second);
    
    for (int i=length1-1;i>-1;i--){
        int carry=0;
        int number1=(int)(first[i]);
        int number2=(int)(second[i]);
        if (number1==NULL){
            number1=0;
        }else if(number2==NULL){
            number2=0;
        }else{
            number1=number1;
            number2=number2;
        }
        
        int sum = number1+number2=
        
    }
    
}

int main(int argc,char **argv){
    char number1=[];
    char number2=[];
    std::cin>>number1;
    std::cin>>number2;
    add(number1,number2);
    substract(number1,number2);
    
    return 0;
}
