void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
         if(nums[i]!=0)
         {
            swap(&nums[n1],&nums[i]);
            n1++;
         }
        }
    }
};