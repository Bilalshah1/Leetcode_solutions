class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int prefix_sum = 0;
        int postfix_sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            prefix_sum = accumulate(nums.begin(), nums.begin() + i, 0);
            postfix_sum = accumulate(nums.begin() + i + 1, nums.end(), 0);
            if (postfix_sum == prefix_sum)
                return i;
        }
        return -1;
    }
};