#include <iostream>
#include <stdlib.h>

extern int* customer_payment(int);

int main(){
    // Initiallise number of customers
    int customers=10;
    int* pay=customer_payment(customers);
    for (int i=0;i<customers;i++){
        std::cout<<"The total amount paid from customer "<<i+1<<" is ";
        printf("%d\n", *(pay+i));
    }
    return 0;
}

