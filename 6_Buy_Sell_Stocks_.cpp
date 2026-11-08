// Buy & Sell Stocks 
// Time complexity is :  O(n+n) which is   = O(2n) which is = O(n);

#include <iostream>
#include <climits>
using namespace std;

// Function for buying and selling 
void Max_Profit(int *prices, int n) {
    // Best buying for each day
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    
    cout << "Best Buying price for each day : ";
    for (int i = 1; i < n ; i++) {

        // i - 1 helps to visit the 0th index element for both bestBuy and prices {array}
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);   
        cout << bestBuy[i]<< ", ";
    }

    cout << "\n";
    int maxProfit = 0;
    for (int i = 0; i < n ; i++) {

        // current profit depends  best buy - price 
        int currentProfit = prices[i] - bestBuy[i] ;
        maxProfit = max(maxProfit, currentProfit);
        
    }
    cout << "Maximum profit is : " << maxProfit;
}

int main() {

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    Max_Profit(prices, n);
    return 0;
}