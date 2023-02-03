#include<iostream>

int main(){
  int array[]={1,2,3,4};
  int *p=array;
for (int i=0;i<4;i++){
  std::cout<<*(p+i)<<" ";
}
 return 0;
}
