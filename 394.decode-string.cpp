class Solution
{
public:
    string decodeString(string s)
    {
        stack<string> st;
        stack<int> num;

        int mul = 0;

        for (int i = 0; i < s.size(); i++)
        {

            if (isdigit(s[i]))
            {
                mul = mul * 10 + (s[i] - '0');
            }
            else if (s[i] == '[')
            {
                num.insert(mul);
                mul = 0;
            }
            else
        }
    }
};