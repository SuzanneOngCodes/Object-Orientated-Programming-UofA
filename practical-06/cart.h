#ifndef CART_H
#define CART_H
#include <string>
#include "meerkat.h"

class cart:public meerkat
{
public:
    cart();                         // create an empty cart object
    bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
    void emptyCart();               // remove all meerkats from the cart
    void printMeerkats();           // print the name, a space, the age, then a new line
                                    // for each meerkat in the order they were added
    int cart_storage;
    int index;
    meerkat *array = new meerkat [4];
    ~cart();
};

#endif

