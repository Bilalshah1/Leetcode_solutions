class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int max_sum = 0;

        for (int i = 0; i <= gain.size(); i++)
        {
            int sum = accumulate(gain.begin(), gain.begin() + i, 0);
            cout << sum << endl;
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};