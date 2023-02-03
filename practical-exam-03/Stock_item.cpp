#include "Stock_item.h"
#include <string>
#include <iostream>

using namespace std ;

Stock_item::Stock_item(){
    describe='\0';
    code = 0;
}

Stock_item::Stock_item(std::string description, int code_number){
    describe = description;
    code = code_number;
}

string Stock_item::get_description(){
    return describe;
}

int Stock_item::get_item_number(){
    return code;
}

Stock_item::~Stock_item(){
}
