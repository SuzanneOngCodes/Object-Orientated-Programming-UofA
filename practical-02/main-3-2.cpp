#include <iostream>
#include <stdlib.h>

extern int* customers_payment(int);

int main(){
    // Initiallise number of customers
    int customers;
    printf("How many customers are in the queue? ");
    std::cin>>customers;
    int* pay=customers_payment(customers);
    for (int i=0;i<customers;i++){
        std::cout<<"The total amount paid from customer "<<i+1<<" is ";
        printf("%d\n", *(pay+i));
    }
    return 0;
}
