class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int cnt = 0;
        int j = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == s[j])
            {
                j++;
                cnt++;
            }
        }
        if (cnt == s.size())
            return true;
        else
            return false;
    }
};

