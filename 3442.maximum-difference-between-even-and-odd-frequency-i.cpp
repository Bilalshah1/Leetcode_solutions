class Solution
{
public:
    int maxDifference(string s)
    {
        map<char, int> frequencies;
        for (int i = 0; i < s.size(); i++)
        {
            frequencies[s[i]] += 1;
        }
        int max = 0;
        int min = 999999;
        for (const auto &pair : frequencies)
        {
            if (pair.second % 2 == 0)
            {
                if (pair.second < min)
                    min = pair.second;
            }
            else
            {
                if (pair.second > max)
                    max = pair.second;
            }
        }
        return max - min;
    }
};