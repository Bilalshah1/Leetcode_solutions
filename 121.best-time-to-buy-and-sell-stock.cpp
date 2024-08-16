class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max_profit = 0;
        int profit;
        for (int i = 0; i < prices.size(); i++)
        {
            int min_so_far = *min_element(prices.begin(), prices.begin() + i);
            if (i == 0)
                max_profit = prices[0] - min_so_far;
            profit = prices[i] - min_so_far;
            max_profit = max(profit, max_profit);
        }
        return max_profit;
    }
};