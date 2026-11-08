// This code show the BRUTE FORCE approach to find the max subarray sum

//  B R U T E____F O R C E approach

#include <iostream>
#include <climits>   //For using int_max, int_min functions
using namespace std;

void max_Sub_Array_sum(int *arr, int n) {

    int maxSum = INT_MIN;   // Using CPP built in int min number to compare with sum variable.
    for (int start  = 0 ; start < n ; start++) {
        for (int end = start; end < n ; end++) {
            int sum = 0 ;

            for (int i = start; i <= end; i++) {

                sum+= arr[i];     // Assigning the array values to this sum variable.
               
            }
            cout << sum << ", ";  // Printing the values 
            maxSum = max(maxSum, sum);  // Using CPP built in function to compare between two numbers
        }
        cout << endl;
    }
    cout << "Maximum Sub_Array sum is = "<< maxSum;
}
int main() {

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    max_Sub_Array_sum(arr, n);
    return  0;
}