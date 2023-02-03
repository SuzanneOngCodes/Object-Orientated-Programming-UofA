// Function to return the sum of all elements in an int array
int sum_array(int array[], int n)
{
    // Initiallise the variable "sum" as 0
    int sum=0;
    
    // The for loop allows the program to run iteratively based on the size parameter "n" to sum up all elements in the int array
    for (int i=0; i<n; i++){
        
        // The if statement sums up all elements in the int array when n is more than 0 and stores the value in variable "sum". The function should return 0 if n is less than 1
        if (n>0){
            sum+=array[i];
        }
    }
    
    return sum;
}
