 long long int nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    if (r > n - r) r = n - r; 
     long long int numerator = 1;
     long long int denominator = 1;
    for (int i = 0; i < r; ++i) {
        numerator *= (n - i);
        denominator *= (i + 1);
    }
    return numerator / denominator;
}

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> Pascal_sequence;
        for (int i = 0; i < numRows; i++)
        {
            Pascal_sequence.push_back(vector<int>());
            for (int j = 0; j <= i; j++)
            {

                Pascal_sequence[i].push_back(nCr(i, j));
            }
        }
        return Pascal_sequence;
    }
};
