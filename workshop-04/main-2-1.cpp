#include <iostream>
#include <string>

extern float add_op(float , float, std::string);
extern float subtract_op(float , float, std::string);
extern float arithmetic_ops(float , float, std::string);


int main(){
    float left_num=99;
    float right_num=6;
    std::string numbers="-";
    float sum_and_minus=arithmetic_ops(left_num, right_num,numbers);
    std::cout<<sum_and_minus<<std::endl;
    return 0;
}


