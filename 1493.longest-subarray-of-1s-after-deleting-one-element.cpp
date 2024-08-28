class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int low = 0;
        int high = 0;
        int zeros = 0;
        int max_sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[high] == 0)
                zeros++;

            while (zeros > 1)
            {
                if (nums[low] == 0)
                    zeros--;
                low++;
            }
            max_sum = max(max_sum, high - low + 1);
            high++;
        }
        return max_sum - 1;
    }
};