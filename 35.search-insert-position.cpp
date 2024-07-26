class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int m;
        while (start <= end)
        {
            m = (start + end) / 2;

            if (target == nums[m])
            {
                return m;
            }
            else if (target > nums[m])
            {
                start = m + 1;
            }
            else if (target < nums[m])
            {
                end = m - 1;
            }
        }

        if (target < nums[m])
            return m;
        else
            return m + 1;
    }
};