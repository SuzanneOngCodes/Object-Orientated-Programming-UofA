#include <iostream>
#include "cart.h"
#include "meerkat.h"

using namespace std;

int main(){
    cart display;
    meerkat a1,a2,a3,a4,a5;
    a1.name = "REESE";
    a1.age = 46;
    a2.name = "MAY";
    a2.age = 43;
    a3.name = "MUM";
    a3.age = 32;
    a4.name = "REESE";
    a4.age = 46;
    a5.name = "REESE";
    a5.age = 46;
    display.addMeerkat(a1);
    display.addMeerkat(a2);
    display.addMeerkat(a3);
    display.addMeerkat(a4);
    display.addMeerkat(a5);
    display.addMeerkat(a5);
    display.printMeerkats();
    display.emptyCart();
    display.addMeerkat(a5);
    display.printMeerkats();

    return 0;
}

