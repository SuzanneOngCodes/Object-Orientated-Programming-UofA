#include "Stock_item.h"
#include <string>
#include <iostream>
#include "Store.h"

using namespace std ;

int main(){
    Stock_item food;
    food = Stock_item("name", 4563);
    Store my_shop;
    my_shop = Store(10);
    
    int result = my_shop.get_total_stock_count();
    int all = my_shop.get_stock_quantity(4563);
    cout<<my_shop.stored<<endl;
    return 0;
}
