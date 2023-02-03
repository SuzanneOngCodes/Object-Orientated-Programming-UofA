#include <iostream>
#include <string>

extern void print_class(std::string [4], std::string [], int [][4], int );

int main(){
  std::string students[]={};
  std::string courses[4]={};
  int report_card[][4]={};
int number_students;
std::cin>>number_students;
for (int i=0;i<number_students;i++){
std::cin>>students[i];
for (int j=0;j<4;j++){
std::cin>>courses[j];
}
}
print_class(courses,students,report_card,number_students);
return 0;
}
