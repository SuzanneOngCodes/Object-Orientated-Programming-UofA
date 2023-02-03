// Contigous Subarray Sum in linear time
#include <iostream>
using namespace std;

int maximum_sum(int *nums,int length) {
    // Return 0 if all numbers are negative
    int max_sum=0;
    // The local sum for numbers
    int sum=0;
    for (int i=0;i<length;i++){
        // To find the max of previous+current value in nums and current value of nums
        sum=max(sum+nums[i],nums[i]);
        max_sum=max(sum,max_sum);
    }
    return max_sum;
}
