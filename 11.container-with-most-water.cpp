class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int max_water_so_far = 0;
        int water = 0;
        while (left < right)
        {

            water = min(height[left], height[right]) * (right - left);
            max_water_so_far = max(water, max_water_so_far);
            if (height[left] < height[right])
            {
                left++;
            }
            else if (height[left] > height[right])
            {
                right--;
            }
            else
            {
                left++;
                right--;
            }
        }
        return max_water_so_far;
    }
};