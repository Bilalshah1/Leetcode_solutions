class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> hashmap;
        set<int, int> s;

        for (int i = 0; i < arr.size(); i++)
        {
            hashmap[arr[i]] += 1;
        }

        for (const auto &pair : hashmap)
        {
            s.insert(pair.second);
        }
        if (hashmap.size() == s.size())
            return 1;
        else
            return 0;
    }
};