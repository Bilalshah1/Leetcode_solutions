

class Solution
{
public:
    bool isHappy(int n)
    {
        map<int, int> visited;
        visited[n] = 1;

        while (n != 1)
        {
            int sum = 0;
            while (n > 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;
            cout << n << endl;
            if (visited[n])
                return 0;
            visited[n] = 1;
        }
        return 1;
    }
};