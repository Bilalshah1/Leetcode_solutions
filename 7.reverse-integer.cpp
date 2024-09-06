class Solution
{
public:
    int reverse(int x)
    {
        vector<int> num;
        int ans = 0;
        int exp = 0;

        while (x != 0)
        {

            num.push_back(x % 10);
            x = x / 10;
        }
        for (int i = num.size() - 1; i >= 0; i--)
        {
            if ((num[i] * pow(10, exp) + ans) < INT_MIN || (num[i] * pow(10, exp) + ans) > INT_MAX)
                return 0;
            ans = num[i] * pow(10, exp) + ans;
            exp++;
        }
        return ans;
    }
};