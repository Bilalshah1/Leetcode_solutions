class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        istringstream iss(s);
        string word;
        while (iss >> word)
        {
            words.push_back(word);
        }
        s = "";
        reverse(words.begin(), words.end());
        for (int i = 0; i < words.size(); i++)
        {
            if (i != words.size() - 1)
            {
                s += words[i] + " ";
            }
            else
                s += words[i];
        }
        return s;
    }
};