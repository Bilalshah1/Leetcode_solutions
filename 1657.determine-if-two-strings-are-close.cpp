class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.size() != word2.size())
            return 0;
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());

        int sum1 = 0;
        int sum2 = 0;
        map<int, int> m1;
        map<int, int> m2;

        for (int i = 0; i < word1.size(); i++)
        {
            m1[word1[i] - 'a'] += 1;
            m2[word2[i] - 'a'] += 1;
        }

        auto it1 = m1.begin();
        auto it2 = m2.begin();

        while (it1 != m1.end() && it2 != m2.end())
        {
            if (it1->first == it2->first)
            {
                sum1 += it1->second;
                sum2 += it2->second;
            }
            else
            {
                return 0;
            }
            ++it1;
            ++it2;
        }

        if (sum1 == sum2)
            return 1;
        else
            return 0;
    }
};