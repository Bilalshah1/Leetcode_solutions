class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<vector<int>> ans(2);
        set<int> s;
        vec<int> temp;
        for (int i = 0; i < nums1.size(); i++)
        {
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            if (it == nums2.end())
                s.insert(nums1[i]);
        }
        for (const int &elem : s)
        {
            ans[0].push_back(elem);
        }
        s.clear();
        for (int i = 0; i < nums2.size(); i++)
        {
            auto it = find(nums1.begin(), nums1.end(), nums2[i]);
            if (it == nums1.end())
                s.insert(nums2[i]);
        }
        for (const int &elem : s)
        {
            ans[0].push_back(elem);
        }
        s.clear();
        return ans;
    }
};