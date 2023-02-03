#include<iostream>

int main(){
  int array[][4]={{1,2,3,4},{1,2,3,4}};
  int (*p)[4]=&array[0][0];
for (int i=0;i<2;i++){
for (int j=0;j<4;j++){
*p
  std::cout<<*(p+i+j*4)<<" ";
}
std::cout<<std::endl;
}
 return 0;
}

