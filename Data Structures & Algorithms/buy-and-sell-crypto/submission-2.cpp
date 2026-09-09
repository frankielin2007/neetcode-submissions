class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices.size() == 1 || prices.size() == 0)
            {
                return 0;
            }
            int right = i + 1;
            while (right != prices.size() && prices[right] > prices[i])
            {
                int profit = prices[right] - prices[i];
                max_profit = max(max_profit, profit);
                right++;
            }
        }
        return max_profit;
    }
};
