#include <iostream>
#include <string>

extern float add_op(float , float);
extern float subtract_op(float , float);
extern float multiply_op(float , float);
extern float arithmetic_ops(float , float , float (float,float));


int main(){
    float left_num=99;
    float right_num=6;
    float sum_and_minus=arithmetic_ops(left_num, right_num,multiply_op);
    std::cout<<sum_and_minus<<std::endl;
    return 0;
}



