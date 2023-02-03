#include <iostream>

bool is_a_palindrome(int integers[], int length){
  int boolean;
if(length>0){
  int value;
  if (length%2==0){
    value = length/2;
for (int i=0;i<value;i++){
for (int j=value-1;j>-1;j--){
 if ((integers[i]==integers[j])&&((integers[i+1]>=integers[i])&&(integers[j-1]>=integers[j]))){
boolean=1;
}else{
 boolean=0;
 break;
 }
 }
 }
  }else{
    value= (length/2)+0.5;
 
for (int i=0;i<value;i++){
for (int j=value-1;j>-1;j--){
  if ((integers[i]==integers[j])&&((integers[i+1]>=integers[i])&&(integers[j-1]>=integers[j]))&&(integers[value]>=integers[value-1])&&(integers[value]>=integers[value+1])){
boolean=1;
}else{
 boolean=0;
 break;
  }
}
}
 }
}else{
  boolean= 0;
}
 return boolean;
 }


int sum_elements(int integers[], int length){
int sum = 0 ; 
if(length>0){
for (int i=0;i<length;i++){
sum+=integers[i];
}
return sum;
}else{
  return -1;
}
}

int sum_if_a_palindrome(int integers[], int length){
if(length>0){
  if(is_a_palindrome(integers,length)==1){
return sum_elements(integers, length);
}else{
return -2;
  }
}else{
  return -1;
}
 }
