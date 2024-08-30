class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int row_num = 0;
        int n = grid.size();
        int cnt = 0;
        int pairs = 0;
        while (row_num < n)
        {
            cnt = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (grid[row_num][j] == grid[j][i])
                    {
                        cout << grid[row_num][j] << "," << grid[i][j] << endl;
                        cnt++;
                    }
                    else
                    {
                        cnt == 0;
                    }
                    if (cnt == (n - 1))
                        pairs++;
                }
            }
            row_num++;
        }
        return pairs;
    }
};