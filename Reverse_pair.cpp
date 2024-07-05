#include <iostream>
using namespace std;

void reverse_pairs(int nums[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i < j && nums[i] > 2 * nums[j])
            {
                counter++;
            }
        }
    }
    cout << "\nNumber of pairs: " << counter;
}

int main()
{
    int nums[] = {1, 3, 2, 3, 1};
    reverse_pairs(nums, 5);
}