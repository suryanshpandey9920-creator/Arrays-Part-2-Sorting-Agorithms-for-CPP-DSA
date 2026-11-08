// Kadane's Algorithm to calculate the maximum of subarray's
// Time complexity is O(n)

#include <iostream>
#include <climits>   //For using int_max, int_min functions
using namespace std;

void KadanesMaxSubArraySum(int *arr, int n) {

    int MaxSum = INT_MIN;   //Variable to compare with every current sum
    int currentSum = 0 ;    // variable to calaaulate current sum for after every iteration
    for(int start = 0; start < n; start++) {
        
        currentSum+= arr[start];    // It will store value of arr[i]

        MaxSum = max(MaxSum, currentSum);  // Comparing current sum and storing it into MaxSum

        if(currentSum < 0 ) {       // If current sum values is in negative 
            currentSum = 0;         // Then assign 0 to current sum variable 
        }

        

    } 
    cout << "Maximum sum = " << MaxSum;
}
int main() {

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    KadanesMaxSubArraySum(arr, n) ;

    return 0;
}