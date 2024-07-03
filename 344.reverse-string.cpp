class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int start = 0;
        int end = s.size() - 1;

        for (start = 0; start < end; start++)
        {
            swap(s[start], s[end]);
            end--;
        }
    }
};