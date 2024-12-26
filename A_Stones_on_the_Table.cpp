#include<iostream>
#include<vector>
#include<string>

void Solve()
{
    int n;
    std::cin>>n;
    int count = 0;
    std::string str;
    std::cin>>str;
    std::vector<char> vec;
    for (int i=0;i<n;i++)
    {
        if((vec.size() >0 )&&vec.back() == str[i])
        {
            count +=1;
        }
        else{
            vec.push_back(str[i]);
        }
    }
    std::cout<<count;
}
int main()
{
    Solve();
    return 0;
}