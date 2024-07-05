class Solution
{
public:
    int romanToInt(string s)
    {
        vector < vector<int, string> hash;
        hash.push_back("I", 1);
        hash.push_back("V", 5);
        hash.push_back("X", 10);
        hash.push_back("L", 50);
        hash.push_back("C", 100);
        hash.push_back("D", 500);
        hash.push_back("M", 1000);

        for (int i = 0; i < s.size(); i++)
        {
            if (hash[s[i](1)])
        }
    }
};