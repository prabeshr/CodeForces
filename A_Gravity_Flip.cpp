#include<iostream>
#include<vector>
#include<algorithm>

void Solve()
{
    int n;
    std::cin>>n;
    std::vector<int> vec;
    int num;
    for(int i=0; i <n; i++)
    {
        std::cin>>num;
        vec.push_back(num);
    
    }
    std::sort(vec.begin(), vec.end());
    for(int i = 0; i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }

}
int main()
{
    Solve();
    return 0;
}