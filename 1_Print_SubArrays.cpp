#include <iostream>
using namespace std;

// Function to print subarray's  Index. 
void printSubarrays(int *arr, int n) {

    for (int start = 0; start < n; start++) {   // Outer Loop
        // Iteration 1 => 0,0,0,0,0
        // Iteration 2 => 1,1,1,1
        // Iteration 3 => 2,2,2
        
        for (int end = start; end < n; end++) { // Inner Loop
            // This will print 0 to 4 => 0,1,2,3,4
            // iteration 2 => 1,2,3,4
            // Iteration 3 => 2,3,4

            cout << "(" << start << "," << end << ") ";
            
            
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printSubarrays(arr, n);
    return 0;
}