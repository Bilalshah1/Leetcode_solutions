class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        long long int sum = 0;
        bool found;
        vector<vector<int>> outputVector;
        vector<int> inner_vector;
        for (int r1 = 0; r1 < nums.size(); r1++)
        {
            for (int r2 = r1 + 1; r2 < nums.size(); r2++)
            {
                for (int r3 = r2 + 1; r3 < nums.size(); r3++)
                {
                    sum = nums[r1] + nums[r2] + nums[r3];
                    if (sum == 0)
                    {
                        inner_vector = {nums[r1], nums[r2], nums[r3]};
                        sort(inner_vector.begin(), inner_vector.end());
                        if (outputVector.empty())
                        {
                            outputVector.push_back(inner_vector);
                            inner_vector.clear();
                        }
                        else
                        {
                            found = false;
                            for (const auto &row : outputVector)
                            {
                                if (row == inner_vector)
                                {
                                    found = true;
                                    break;
                                }
                            }
                            if (!found)
                            {
                                outputVector.push_back(inner_vector);
                            }
                            inner_vector.clear();
                        }
                    }
                }
            }
        }
        return outputVector;
    }
};