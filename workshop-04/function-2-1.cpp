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

float arithmetic_ops(float left, float right, std::string op){
    if (op =="+"){
        return add_op(left,right);
    }else{
        return subtract_op(left,right);
    }
}
