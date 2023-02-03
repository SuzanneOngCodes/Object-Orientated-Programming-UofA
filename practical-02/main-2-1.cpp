#include <iostream>
#include <string>

extern void print_as_binary(std::string decimal_number);

int main(int argc,char **argv){
    std::string number;
    std::cin>>number;
    print_as_binary(number);
    return 0;
}


