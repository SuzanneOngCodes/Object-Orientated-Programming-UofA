#include <iostream>
#include <stdlib.h>

int* customers_payment(int number){
    // Initiallise array
    int* array;
    array=(int*) malloc (number); // Or new int[number] and then delete[]
    for (int i=0;i<number;i++){
        int purchases;
        // Ask for number of goods
        printf("How many goods does the customer buy? : ");
        std::cin>>purchases;
        int sum=0;
        for (int j=0;j<purchases;j++){
            int price=0;
            printf("How much?:");
            std::cin>>price;
            sum+=price;
        }
        array[i]=sum;
    }
    return array;
}
