#include<iostream>
using namespace std;

void twoSum(int nums[],int target, int size)
{
    for(int i=0; i<size; i++ ){
        for(int j=i+1; j<size; j++){
            if((nums[i]+nums[j]==target))
            {
                cout<<"["<<i<<","<<j<<"]";
                exit(0);
            }
        }
    }

}
int main(){
    int nums[]={2,7,11,15};
    int target=9;
    twoSum(nums,target,4);
}