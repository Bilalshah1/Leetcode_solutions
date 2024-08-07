class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size() - 1;
        int carry = 0;
        if (digits[n] != 9)
            digits[n]++;
        else
        {
            while (n >= 0)
            {
                if (digits[n] == 9)
                {
                    digits[n] = 0;
                    carry = 1;
                }

                else
                {
                    digits[n]++;
                    carry = 0;
                    break;
                }
                n--;
            }
        }
        if (carry == 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};