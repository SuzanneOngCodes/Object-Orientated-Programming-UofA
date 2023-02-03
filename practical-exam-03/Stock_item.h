#ifndef STOCK_ITEM_H
#define STOCK_ITEM_H
#include <string>
#include <iostream>

using namespace std;

class Stock_item
{
    public:
    Stock_item();                  // a default constructor 
    // a constructor that takes the item description and the item code number as inputs
    Stock_item(std::string description, int code_number);      
    std::string get_description();    // returns the item description
    int get_item_number();       // returns the code number of the item
    ~Stock_item();               //A default destructor
    string describe;
    int code = 0;
};

#endif
