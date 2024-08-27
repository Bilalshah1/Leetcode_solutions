bool checkVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int max_vowels = 0;
        int windowSum = 0;
        for (int i = 0; i < k; i++)
        {
            if (checkVowel(s[i]))
                max_vowels++;
        }
        windowSum = max_vowels;

        for (int i = k; i < s.size(); i++)
        {
            if (checkVowel(s[i]))
                windowSum += 1;
            if (checkVowel(s[i-k]))
                windowSum -= 1;
            max_vowels = max(max_vowels, windowSum);
        }
        return max_vowels;
    }
};