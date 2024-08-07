class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < g.size(); j++)
            {
                if (s[i] >= g[j])
                {
                    g.erase(g.begin() + j);
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};