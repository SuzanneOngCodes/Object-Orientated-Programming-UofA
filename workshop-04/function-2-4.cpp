// use a function pointer to call the appropriate operator function
// eg to add       arithmetic_ops(10,2,add_op)
// eg to subtract  arithmetic_ops(10,2,subtract_op)
#include <iostream>
#include <string>

float add_op(float left, float right){
    left+=right;
    return left;
}
float subtract_op(float left, float right){
    left-=right;
    return left;
}

float multiply_op(float left, float right){
    left=left*right;
    return left;
}

float arithmetic_ops(float left, float right, float (*op)(float,float)){
        return (*op)(left, right);
}
