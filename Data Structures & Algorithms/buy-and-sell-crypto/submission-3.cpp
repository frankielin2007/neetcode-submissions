class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_profit = prices[0];
        int max_profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            min_profit = min(min_profit, prices[i]);

            int profit = prices[i] - min_profit;

            max_profit = max(max_profit, profit);
        }
        return max_profit;
    }
};
