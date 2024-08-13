class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<int> triplets;
        vector<vector<int>> ans;
        set<vector<int>> triplets_set;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[left] + nums[right] + nums[i];
                if (sum == 0)
                {
                    triplets = {nums[i], nums[left], nums[right]};
                    sort(triplets.begin(), triplets.end());
                    triplets_set.insert(triplets);
                    left++;
                }
                else if (sum > 0)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        for (const auto &vec : triplets_set)
        {
            ans.push_back(vec);
        }
        triplets_set.clear();
        return ans;
    }
};