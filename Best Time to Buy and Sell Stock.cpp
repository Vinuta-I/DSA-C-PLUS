#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices) {
    int n = prices.size();
    if (n <= 1) {
        return 0; // If there are no or only one day's prices, profit is zero.
    }

    int maxProfit = 0;
    int minPrice = prices[0];

    for (int i = 1; i < n; i++) {
        // If the current price is greater than the minimum price seen so far,
        // update the maximum profit with the difference.
        if (prices[i] > minPrice) {
            maxProfit = max(maxProfit, prices[i] - minPrice);
        } else {
            // Otherwise, update the minimum price to the current price.
            minPrice = prices[i];
        }
    }

    return maxProfit;
}
