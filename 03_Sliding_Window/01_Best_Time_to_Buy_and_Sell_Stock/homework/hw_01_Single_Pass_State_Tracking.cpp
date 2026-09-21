#include <algorithm>
#include <iostream>
#include <vector>

int maxProfit(const std::vector<int>& prices) {
    if (prices.empty()) {
        return 0;
    }

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 0; i < prices.size(); i++) {
        min_price = std::min(min_price, prices[i]);
        max_profit = std::max(max_profit, prices[i] - min_price);
    }
    return max_profit;
}

int main() {
    std::vector<int> prices = {7, 6, 4, 3, 1};
    std::cout << "max profit: " << maxProfit(prices) << "\n";

    return 0;
}