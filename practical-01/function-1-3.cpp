#include<iostream>

// Function to return the number of elements in an array that are equal to a given parameter
int count(int array[], int n, int number){
    // Initialise 'total' as 0
    int total=0;
    // The if statement returns the number of elements in the int array when n is more than 0 and stores the value in variable "total". The function should return 0.0 if n is less than 1
    if (n>0){
        for (int i=0;i<n;i++){
            // The if statement compares the element in the array with "number" and increment "total" when the element in array is equals to number
            if (array[i]==number){
                total++;
            }
        }
    }
    return total;
}

