#include <iostream>

extern int binary_to_number(int *, int);

int main(){
  int number[]={1,1,1,1};
 int length=4;
 std::cout<<binary_to_number(number,length)<<std::endl;
return 0;
}
