#include "Stock_item.h"
#include <string>
#include <iostream>

using namespace std ;

int main(){
    Stock_item food;
    food = Stock_item("name", 4563);
    food.get_description();
    food.get_item_number();
    return 0;
}
