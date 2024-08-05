class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        vector<string> words;
        string str = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                while (isalpha(s[i]))
                {
                    str += s[i];
                    i++;
                }
                words.push_back(str);
                str = "";
            }
        }
        return words[words.size() - 1].size();
    }
};