class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int maxSum = 0;
        int windowSum = 0;
        for (int i = 0; i < k; i++)
        {
            maxSum += nums[i];
        }
        windowSum = maxSum;
        for (int i = k; i < nums.size(); i++)
        {
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }
        return maxSum * (1.00000 / k);
    }
};