class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int maxSum = 0;
        int start, end;
        start = end = 0;
        int zeros = 0;

        while (end < nums.size())
        {
            if (nums[end] == 0)
                zeros++;
            while (zeros > k)
            {
                if (nums[start] == 0)
                    zeros--;
                start++;
            }

            maxSum = max(maxSum, end - start + 1);
            end++;
        }
        return maxSum;
    }
};
