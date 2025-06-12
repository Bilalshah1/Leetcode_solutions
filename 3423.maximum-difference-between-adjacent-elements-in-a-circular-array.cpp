class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) 
    {
        int maxDiff=0;
        for(int i=1; i<nums.size(); i++)
        {
            maxDiff=max(maxDiff, abs(nums[i]-nums[i-1]));
        }

        // for edge cases
        maxDiff=max(maxDiff, abs(nums[nums.size()-1]-nums[0]));
    return maxDiff;
    }
};