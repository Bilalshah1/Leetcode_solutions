class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string combine = "";
        for (int i = 0; i < max(word1.size(), word2.size()); i++)
        {
            combine += (i < word1.size() ? string(1, word1[i]) : "");
            combine += (i < word2.size() ? string(1, word2[i]) : "");
        }
        return combine;
    }
};