#include <iostream>

extern int sum_if_a_palindrome(int*, int);
extern  bool is_a_palindrome(int*, int);
extern int sum_elements(int*, int);

int main(){
  int number[]={1,2,3,3,2,1};
  int length=5;
std::cout<<sum_if_a_palindrome(number,length)<<std::endl;
std::cout<<is_a_palindrome(number,length)<<std::endl;
std::cout<<sum_elements(number,length)<<std::endl;
return 0;
}

