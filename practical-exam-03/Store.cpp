#include <string>
#include "Stock_item.h"
#include <iostream>
#include "Store.h"


using namespace std ;

Store::Store(){
    index = 0 ;
}

Store::Store(int capacity){
    storage = capacity;
    stored = new Stock_item[storage];
}


int Store::get_total_stock_count(){
    return index;
}

bool Store::add_stock(Stock_item new_stock){
    bool result;
    if(index < storage){
        stored[index] = new_stock;
        index++;
        result = 1;
    }else{
        result = 0;
    }
    return result;
}

int Store::get_stock_quantity(int item_number){
    int number = 0;
    for (int i =0 ; i< index; i++){
        if(stored[i].code == item_number){
            number++;
        }
    }
    return number;
}

// Remember this mistake!!!! It's Stock item* not get_current*
Stock_item* Store::get_current_stock_list()
{
    return stored;
}

Store::~Store(){
    delete[] stored;
}
