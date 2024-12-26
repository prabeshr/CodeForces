#include<iostream>
#include<vector>
#include<algorithm>


void solve()
{
    int n;
    std::cin>>n;
    int sum = 0;
    std::vector<int> nums;
    int num;
    for(int i = 0; i<n; i++)
    {
        std::cin>>num;
        nums.push_back(num);
        sum = sum + num;
    }
    std::sort(nums.begin(), nums.end());
    int a = 0;
    int partial_sum = 0;
    for (int i = 0; i<n;i++)
    {
        partial_sum = partial_sum+nums[n-i-1];
        a = a+1;
        if(partial_sum>int(sum/2))
        {
            std::cout<<a;
            break;
        }
    }
}

int main()
{
    solve();
    return 0;
}