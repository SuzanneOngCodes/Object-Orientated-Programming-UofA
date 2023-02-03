#include <iostream>
#include <string>

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){
std::cout<<"Report Card"<<std::endl;
for (int i=0;i<nstudents;i++){

std::cout<<students[i]<<" ";
for (int j=0;j<4;j++){
std::cout<<courses[j]<<" ";
}
std::cout<<std::endl;
}

}
