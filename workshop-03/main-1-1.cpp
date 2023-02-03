#include <iostream>

extern void printer(int [10][10]);

int main(){
int vector[10][10];
for (int i=0;i<10;i++){
for (int j=0;j<10;j++){
std::cin>>vector[i][j];
}
}
printer(vector);
return 0;
}

