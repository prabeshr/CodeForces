#include<iostream>
#include<string>
#include <vector>

int Solve(std::vector<int> nums, int k,int n)
{
    int num;
    std::cin>>num;
    num = nums[k-1];
    int count = 0;
    for (int i=0;i<n;i++)
    {
        if(nums[i]>=num and nums[i] !=0)
        {
            count +=1;
        }
    }
    std::cout<<count;
}
int main()
{
    std::vector<int> nums;
    int n,k;
    std::cin>>n ;
    std::cin>>k;
    int num;
    for (int i=0;i<n;i++)
    {
        std::cin>>num;
        nums.push_back(num);
    }
    Solve(nums,k,n);
}