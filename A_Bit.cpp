#include<iostream>
#include<string>
int Solve()
{
    std::string str;
    std::cin>>str;
    if (str[1]=='+')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    std::cin>>n ;
    int count = 0;
    for (int i=0;i<n;i++)
    {
        count += Solve();
    }
    std::cout<<count;
}