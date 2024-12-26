#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


void Solve()
{
    int a,b,c;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    int max = 0;
    if(a+b*c > max)
    {
        max = a+b*c;
    }
    if(a*(b+c) > max)
    {
        max = a*(b+c);
    }
    if(a*b*c > max)
    {
        max = a*b*c;
    }
    if((a+b)*c > max)
    {
        max = (a+b)*c;
    }
    if(a+b+c > max)
    {
        max = a+b+c;
    }
    if(a*b*c > max)
    {
        max = a*b*c;
    }
    std::cout<<max;
}

int main()
{
    Solve();
    return 0;
}