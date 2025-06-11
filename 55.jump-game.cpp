class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        for(int i=0; i<nums.size(); )
        {
            i+=nums[i];
            if(i==0 && i!=nums.size()-1) return false; 
        }
        return true;
        
    }
};