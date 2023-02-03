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
    my_shop.add_stock(food);
    int result = my_shop.get_total_stock_count();
    cout<<result<<endl;
    return 0;
}
