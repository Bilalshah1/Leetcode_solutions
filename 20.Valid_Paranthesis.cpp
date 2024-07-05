class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> expression;

        vector<pair<char, char>> opposite_pair = {
            {')', '('},
            {']', '['},
            {'}', '{'}};

        char opposite;
        int current;

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                expression.push(s[i]);
            }
            if (expression.empty())
                return 0;
            if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                for (const auto &pair : opposite_pair)
                {
                    if (pair.first == s[i])
                    {
                        opposite = pair.second;
                    }
                }
                if (!expression.empty())
                {
                    if (expression.top() == opposite)
                    {
                        expression.pop();
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
        }

        if (expression.empty())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};