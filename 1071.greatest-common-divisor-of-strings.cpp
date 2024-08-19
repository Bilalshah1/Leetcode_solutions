class Solution
{
public:
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    string gcdOfStrings(string str1, string str2)
    {
        int gcd_length = gcd(str1.size(), str2.size());
        string temp = "";
        bool flag1 = false;
        bool flag2 = false;
        string prefix = "";
        for (int i = 0; i < gcd_length; i++)
        {
            prefix += str1[i];
        }

        while (temp.size() <= max(str1.size(), str2.size()))
        {
            temp += prefix;
            if (temp == str1)
                flag1 = true;
            if (temp == str2)
                flag2 = true;
        }
        if (flag1 && flag2)
            return prefix;
        else
            return "";
    }
};