#include <iostream>
using namespace std;
// Function to print rh the sub-array's
void printSubArray(int *arr, int n) {

    for (int start = 0 ; start < n ; start++) {   //Outer loop to print the first element in every line

        for (int end = start; end  < n ; end++) {  //Inner loop to print continious elemments  (1 2 3 4 )like this 

            for (int i = start; i <= end; i++) {

                // Inner loop 3 to print the array elements 
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;

    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printSubArray(arr, n);
    return  0;
}