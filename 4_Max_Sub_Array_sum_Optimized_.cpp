// Optimized method to calculate the maximum of subarray's 
// Time complexity is O(n^2)

#include <iostream>
#include <climits>   //For using int_max, int_min functions
using namespace std;

void maxSubarrySumOPT(int *arr, int n) {
    // Creating a maximum sum variable for comparision
    int MaxSum = INT_MIN;

    for (int start = 0; start < n ; start++) {

        int currentSum = 0;
            for (int  end = start; end < n ; end ++) {
                // Assigning ending values in currentSum variable after every iteration
                currentSum += arr[end];    
               
                MaxSum = max(MaxSum, currentSum) ; 
            }
            
    }
    cout << "Maximum sum is = " << MaxSum ;
}

int main() {

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarrySumOPT(arr, n);
    return 0;
}