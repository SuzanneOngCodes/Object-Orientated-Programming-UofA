#include <iostream>

int size_of_variable_star_arr()  {
    int n=5;
    int *arr = new int[n];
    delete[] arr;
    return sizeof(arr);
}

