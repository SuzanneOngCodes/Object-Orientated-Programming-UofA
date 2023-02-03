// Function to return the average of all elements in an int array
#include<iostream>

double average(int array[], int n){
    // Initiallise the variable "sum" and "total" as 0 and 0.0
    double sum=0;
    double total= 0.0;
    // The if statement averages up all elements in the int array when n is more than 0 and stores the value in variable "sum". The function should return 0.0 if n is less than 1
    if (n>0){
        // The for loop allows the program to run iteratively based on the size parameter "n" to sum up all elements in the int array
        for (int i=0;i<n;i++){
            sum+=array[i];
        }
        total=sum/n;
    }
    return total;
}
