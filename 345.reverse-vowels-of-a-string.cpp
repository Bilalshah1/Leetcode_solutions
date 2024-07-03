class Solution
{
public:
    string reverseVowels(string s)
    {
        int start;
        int end = s.size() - 1;
        for (start = 0; start < end; start++)
        {
            if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u' || s[start] == 'A' || s[start] == 'E' || s[start] == 'I' || s[start] == 'O' || s[start] == 'U')
            {
                while (start != end)
                {
                    if (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u' || s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U')
                    {
                        swap(s[start], s[end]);
                        end--;
                        break;
                    }
                    end--;
                }
            }
        }
        return s;
    }
};