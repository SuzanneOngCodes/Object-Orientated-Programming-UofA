#include "cart.h"
#include "meerkat.h"
#include <string>
#include <iostream>

using namespace std;

cart::cart()
{
    cart_storage = 0 ;
    index = 0 ;
}

bool cart::addMeerkat(meerkat cat)
{
    bool result;
    if(cart_storage>=4){
        result=0;
    }else{
        array[index] = cat;
        cart_storage++;
        index++;
        result=1;
    }
    return result;
}

void cart::emptyCart()
{
    index=0;
    cart_storage = 0;
}

void cart::printMeerkats()
{
    for (int i = 0 ; i < index ; i++){
        cout<<array[i].name<<" "<<array[i].age<<endl;
    }
}

cart::~cart()
{
    delete[] array;
}
