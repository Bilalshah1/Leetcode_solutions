class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> ans(candies.size());
        for (int i = 0; i < candies.size(); i++)
        {
            candies[i] += extraCandies;
            int max = *max_element(candies.begin(), candies.end());
            if (max == candies[i])
                ans[i] = 1;
            else
                ans[i] = 0;
            candies[i] -= extraCandies;
        }
        return ans;
    }
};