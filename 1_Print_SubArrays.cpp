#include <iostream>
using namespace std;

// Function to print subarray's  Index. 
void printSubarrays(int *arr, int n) {

    for (int start = 0; start < n; start++) {   // Outer Loop
        
        for (int end = start; end < n; end++) { // Inner Loop
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