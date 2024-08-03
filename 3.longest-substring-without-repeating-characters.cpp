class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int hash_table[256];
        fill(begin(hash_table), end(hash_table), -1);
        int max_length = 0;
        int l, r;
        l = r = 0;
        for (r = 0; r < s.size(); r++)
        {
            if(hash_table[s[r]]!=-1)
            {
                if(hash_table[s[r]]>=l)
                {
                    l=hash_table[s[r]]+1;
                }
            }
            max_length=max(max_length,(r-l+1));
            hash_table[s[r]]=r;
        }
        return max_length;
    }
};