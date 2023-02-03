#include<iostream>

int main(){
int variable=42;
int *p=&variable;
 *p=*p+5;
std::cout<<*p<<std::endl;
 *p=*p-2;
std::cout<<*p<<std::endl;
return 0;
}

